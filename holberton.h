#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/**
 * struct printer - print different data depending on a format specifier
 *
 * @ch: format specifier
 * @print: pointer to a print function
 *
 * Description: a structure to hold a character to specify what to print
 * and pointer to functions with printing capabilities to various types
 */
typedef struct printer
{
	char ch;
	int (*print)(va_list);
} printer_t;

int _printf(const char *format, ...);
int _putchar(char c);
int process_format(va_list list, char c);
int print_string(va_list list);
int print_string_all(va_list list);
int print_integer(va_list list);
unsigned int _pow(int base, int exponent);
int convert(unsigned int num, int base, char ch);
int print_octal(va_list list);
int print_hex_lower(va_list list);
int print_hex_upper(va_list list);
int print_binary(va_list list);

#endif
