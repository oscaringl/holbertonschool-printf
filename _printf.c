#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 * Return: On success, the number of characters written. On error, -1 is returned
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: The number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
    va_list args;
    char buffer[1024];
    int count = 0;
    int buffer_index = 0;

    va_start(args, format);

    while (format && *format)
    {
        if (*format == '%')
        {
            format++;

            if (*format == 'c')
            {
                char c = va_arg(args, int);
                buffer[buffer_index++] = c;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                int i;

                if (str == NULL)
                    str = "(null)";

                for (i = 0; str[i]; i++)
                    buffer[buffer_index++] = str[i];
            }
            else if (*format == '%')
            {
                buffer[buffer_index++] = '%';
            }
            else if (*format == 'd' || *format == 'i')
            {
                int num = va_arg(args, int);
                char num_str[50];
                int i = 0;

                if (num < 0)
                {
                    buffer[buffer_index++] = '-';
                    num = -num;
                }

                if (num == 0)
                {
                    buffer[buffer_index++] = '0';
                }
                else
                {
                    while (num != 0)
                    {
                        num_str[i++] = '0' + (num % 10);
                        num /= 10;
                    }

                    while (--i >= 0)
                        buffer[buffer_index++] = num_str[i];
                }
            }
            else if (*format == 'u')
            {
                unsigned int num = va_arg(args, unsigned int);
                char num_str[50];
                int i = 0;

                if (num == 0)
                {
                    buffer[buffer_index++] = '0';
                }
                else
                {
                    while (num != 0)
                    {
                        num_str[i++] = '0' + (num % 10);
                        num /= 10;
                    }

                    while (--i >= 0)
                        buffer[buffer_index++] = num_str[i];
                }
            }
            else if (*format == 'o')
            {
                unsigned int num = va_arg(args, unsigned int);
                char num_str[50];
                int i = 0;

                if (num == 0)
                {
                    buffer[buffer_index++] = '0';
                }
                else
                {
                    while (num != 0)
                    {
                        num_str[i++] = '0' + (num % 8);
                        num /= 8;
                    }

                    while (--i >= 0)
                        buffer[buffer_index++] = num_str[i];
                }
            }
            else if (*format == 'x' || *format == 'X')
            {
                unsigned int num = va_arg(args, unsigned int);
                char num_str[50];
                int i = 0;
                char hex_digits[] = "0123456789abcdef";
                if (*format == 'X')
                    hex_digits = "0123456789ABCDEF";

                if (num == 0)
                {
                    buffer[buffer_index++] = '0';
                }
                else
                {
                    while (num != 0)
                    {
                        num_str[i++] = hex_digits[num % 16];
                        num /= 16;
                    }

                    while (--i >= 0)
                        buffer[buffer_index++] = num_str[i];
                }
            }
            else if (*format == 'b')
            {
                unsigned int num = va_arg(args, unsigned int);
                char num_str[50];
                int i = 0;

                if (num == 0)
                {
                    buffer[buffer_index++] = '0';
                }
                else
                {
                    while (num != 0)
                    {
                        num_str[i++] = '0' + (num % 2);
                        num /= 2;
                    }

                    while (--i >= 0)
                        buffer[buffer_index++] = num_str[i];
                }
            }
            else if (*format == 'S')
            {
                char *str = va_arg(args, char *);
                int i;

                if (str == NULL)
                    str = "(null)";

                for (i = 0; str[i]; i++)
                {
                    if (str[i] < ' ' || str[i] >= 127)
                    {
                        buffer[buffer_index++] = '\\';
                        buffer[buffer_index++] = 'x';
                        buffer[buffer_index++] = (str[i] / 16) < 10 ? (str[i] / 16) + '0' : (str[i] / 16) - 10 + 'A';
                        buffer[buffer_index++] = (str[i] % 16) < 10 ? (str[i] % 16) + '0' : (str[i] % 16) - 10 + 'A';
                    }
                    else
                    {
                        buffer[buffer_index++] = str[i];
                    }
                }
            }
            else if (*format == 'r')
            {
                char *str = va_arg(args, char *);
                int i, j;

                if (str == NULL)
                    str = "(null)";

                for (i = 0; str[i]; i++)
                    ;

                for (j = i - 1; j >= 0; j--)
                    buffer[buffer_index++] = str[j];
            }
            else if (*format == 'R')
            {
                char *str = va_arg(args, char *);
                int i;

                if (str == NULL)
                    str = "(null)";

                buffer_index = rot13(str, buffer, buffer_index);
            }
        }
        else
        {
            buffer[buffer_index++] = *format;
        }

        format++;
    }

    va_end(args);

    count = write(1, buffer, buffer_index);

    return count;
}
