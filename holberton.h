#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>

/**
 * struct printer - structure to a format specifier and a function pointer
 *
 * @ch: the format specifier
 * @print: a pointer to a function that takes a varialbe argument list
 * and returns an integer
 *
 */
typedef struct printer
{
	char ch;
	int (*print)(va_list list);
} printer_t;

int _putchar(char c);
int _printf(const char *format, ...);
int process_format(va_list list, char ch);
int print_integer(va_list list);
unsigned int _pow(int base, int exponent);
int print_unsigned(va_list list);
int print_string(va_list list);
int print_string_all(va_list list);
int convert(unsigned int num, int base, char ch);
int print_octal(va_list list);
int print_hex_lower(va_list list);
int print_hex_upper(va_list list);
int print_binary(va_list list);

#endif
