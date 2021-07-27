#include "holberton.h"
#include <stdarg.h>

/**
 * convert - convert from decimal to different base
 *
 * @num: the decimal number to convert
 * @base: the base to convert to
 * @ch: character to check if hexadecimal specifier is x or X
 *
 * Description: convert and print
 *
 * Return: the number of characters printed
 */
int convert(unsigned int num, int base, char ch)
{
	char bits[64];
	char *digits = "0123456789ABCDEF";
	int i, j;

	i = 0;
	while (num != 0)
	{
		if (num % base >= 10 && ch == 'x')
			bits[i] = digits[num % base] + 32;
		else
			bits[i] = digits[num % base];
		++i;
		num /= base;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(bits[j]);
	return (i - 1);
}

/**
 * print_octal - print a decimal in octal
 *
 * @list: the variable argument list
 *
 * Return: number of characters printed
 */
int print_octal(va_list list)
{
	unsigned int num = va_arg(list, int);

	return (convert(num, 8, 'o'));
}

/**
 * print_hex_lower - print a decimal in hexadecimal in lowercase
 *
 * @list: the variable argument list
 *
 * Return: number of characters printed
 */
int print_hex_lower(va_list list)
{
	unsigned int num = va_arg(list, int);

	return (convert(num, 16, 'x'));
}

/**
 * print_hex_upper - print a decimal in hexadecimal in uppercase
 *
 * @list: the variable argument list
 *
 * Return: number of characters printed
 */
int print_hex_upper(va_list list)
{
	unsigned int num = va_arg(list, int);

	return (convert(num, 16, 'X'));
}

/**
 * print_binary - print a decimal in binary
 *
 * @list: the variable argument list
 *
 * Return: number of characters printed
 */
int print_binary(va_list list)
{
	unsigned int num = va_arg(list, int);

	return (convert(num, 2, 'b'));
}
