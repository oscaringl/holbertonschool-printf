#include "main.h"

#define BUFFER_SIZE 1024

/**
 * _printf - Prints output according to a format
 * @format: The format string
 * @...: Additional arguments to print
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    int i;
    int count = 0;
    va_list args;
    char buffer[BUFFER_SIZE];
    int buffer_index = 0;
    const char *hex_digits = "0123456789ABCDEF";

    va_start(args, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                return (-1);

            switch (format[i])
            {
                case 'c':
                    buffer_index = _print_char(buffer, va_arg(args, int), buffer_index);
                    break;
                case 's':
                    buffer_index = _print_string(buffer, va_arg(args, char *), buffer_index);
                    break;
                case '%':
                    buffer_index = _print_char(buffer, '%', buffer_index);
                    break;
                // Rest of the cases
                // ...
            }
        }
        else
        {
            buffer_index = _print_char(buffer, format[i], buffer_index);
        }

        if (buffer_index >= BUFFER_SIZE - 1)
        {
            write_buffer(buffer, &buffer_index, &count);
        }
    }

    write_buffer(buffer, &buffer_index, &count);

    va_end(args);

    return (count);
}
