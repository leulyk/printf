#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/**
 * _putchar - write a character to the standard output stream
 *
 * @c: character to print
 *
 * Return: 0 on success, -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string to standard output
 *
 * @list: the variable argument list
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *result = va_arg(list, char*);
	int length;

	length = 0;
	while (*(result + length))
	{
		_putchar(*(result + length));
		++length;
	}
	return (length);
}

/**
 * print_integer - prints an integer to standard output
 *
 * @list: the variable argument list
 *
 * Return: number of characters printed
 */
int print_integer(va_list list)
{
	int val = va_arg(list, int);
	unsigned int num, temp;
	int length, degree, digit;

	num = val;
	if (val < 0)
	{
		num = -num;
		_putchar('-');
	}
	temp = num;
	degree = 0;
	while (temp >= 10)
	{
		temp /= 10;
		degree++;
	}
	length = degree;
	while (degree > 0)
	{
		digit = ((num / _pow(10, degree)) % 10);
		_putchar(digit + '0');
		--degree;
	}
	_putchar((num % 10) + '0');
	return (length);
}

/**
 * _pow - compute the power the a base to its exponent
 *
 * @base: the base
 * @exponent: the exponent
 *
 * Return: the result as an unsigned integer
 */
unsigned int _pow(int base, int exponent)
{
	unsigned int result;
	int i;

	i = 1, result = 1;
	while (i++ <= exponent)
		result *= base;
	return (result);
}
