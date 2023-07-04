#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
void _print_char(va_list args);
void _print_string(va_list args);
void _print_percent(va_list args);
void _print_integer(va_list args);
void _print_unsigned(va_list args);
void _print_octal(va_list args);
void _print_hex(va_list args, int uppercase);
void _print_binary(va_list args);
void _print_pointer(va_list args);
void _print_reverse(va_list args);
void _print_rot13(va_list args);
void _print_nonprintable(va_list args);

/**
 * struct format - struct to store a conversion specifier and its function
 * @specifier: the conversion specifier
 * @f: pointer to the corresponding printing function
 */
typedef struct format
{
	char specifier;
	void (*f)(va_list);
} format_t;

#endif /* MAIN_H */
