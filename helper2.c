#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - prints a character
 *
 * @list: the variable argument list
 *
 * Return: (0)
 */
int print_char(va_list list)
{
	char ch = va_arg(list, int);

	_putchar(ch);
	return (0);
}

/**
 * print_string_all - prints a string to standard output
 *
 * @list: the variable argument list
 *
 * Description: for non-printable character print \x followed
 * by the ASCII code value in hexadecimal (uppercase, 2 characters)
 *
 * Return: number of characters printed
 */
int print_string_all(va_list list)
{
	char *result = va_arg(list, char*);
	int index, length;

	index = length = 0;
	while (*(result + index))
	{
		if ((result[index] > 0 && result[index] < 32) ||
			result[index] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (result[index] <= 15)
			{
				_putchar('0');
				++length;
			}
			length += convert((int)result[index], 16, 'X');
			length += 2;
		}
		else
		{
			_putchar(*(result + index));
			++length;
		}
		++index;
	}
	return (length);
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
	return (length - 1);
}

/**
 * print_string_rev - print reverse of a string
 *
 * @list: variable argument list
 *
 * Return: number of characters printed
 */
int print_string_rev(va_list list)
{
	int i, len;
	char *str = va_arg(list, char *);

	len = _strlen(str);
	for (i = len - 1; i >= 0; --i)
		_putchar(*(str + i));
	return (len - 1);
}

/**
 * _strlen - evaluate the length of a string
 * @str: the string to be processed
 * Return: the length of the the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}
