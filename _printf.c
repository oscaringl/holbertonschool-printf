#include "main.h"

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
                    buffer_index = print_char(buffer, va_arg(args, int), buffer_index);
                    break;
                case 's':
                    buffer_index = print_string(buffer, va_arg(args, char *), buffer_index);
                    break;
                case '%':
                    buffer_index = print_char(buffer, '%', buffer_index);
                    break;
                case 'd':
                case 'i':
                    buffer_index = print_int(buffer, va_arg(args, int), buffer_index);
                    break;
                case 'u':
                    buffer_index = print_unsigned(buffer, va_arg(args, unsigned int), 10, 0, buffer_index);
                    break;
                case 'o':
                    buffer_index = print_unsigned(buffer, va_arg(args, unsigned int), 8, 0, buffer_index);
                    break;
                case 'x':
                    buffer_index = print_unsigned(buffer, va_arg(args, unsigned int), 16, 0, buffer_index);
                    break;
                case 'X':
                    buffer_index = print_unsigned(buffer, va_arg(args, unsigned int), 16, 1, buffer_index);
                    break;
                case 'b':
                    buffer_index = print_unsigned(buffer, va_arg(args, unsigned int), 2, 0, buffer_index);
                    break;
                case 'S':
                    buffer_index = print_string_custom(buffer, va_arg(args, char *), buffer_index);
                    break;
                case 'r':
                    buffer_index = print_string_reverse(buffer, va_arg(args, char *), buffer_index);
                    break;
                case 'R':
                    buffer_index = print_string_rot13(buffer, va_arg(args, char *), buffer_index);
                    break;
                default:
                    buffer_index = print_char(buffer, '%', buffer_index);
                    buffer_index = print_char(buffer, format[i], buffer_index);
                    break;
            }
        }
        else
        {
            buffer_index = print_char(buffer, format[i], buffer_index);
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
