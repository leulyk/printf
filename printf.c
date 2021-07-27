#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "holberton.h"

/**
 * _printf - print a formatted string
 *
 * @format: character string to print composed of 0 or more directives
 *
 * Description: write output to standard output stream
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int index, count;
	va_list data;
	char c;

	index = count = 0;
	va_start(data, format);
	for (; *format && *(format + index); index++)
	{
		for (; *(format + index) && *(format + index) != '%'; index++, count++)
			_putchar(*(format + index));
		if (!format[index])
			return (count);
		else if (*(format + index) == '%')
		{
			index++;
			c = *(format + index);
			if (c == '%')
				_putchar('%');
			else
				count += process_format(data, c);
			count++;
		}
		if (!format[index])
			return (count);
	}
	va_end(data);
	return (count);
}


/**
 * process_format - process a format specifier
 *
 * @list: the variable argument list
 * @ch: character to process
 *
 * Return: number of characters printed
 */
int process_format(va_list list, char ch)
{
	int j = 0;
	int count = 0;
	printer_t p[] = {
		{ 'c', print_char },
		{ 's', print_string },
		{ 'S', print_string_all },
		{ 'r', print_string_rev },
		{ 'd', print_integer },
		{ 'i', print_integer },
		{ 'o', print_octal },
		{ 'x', print_hex_lower },
		{ 'X', print_hex_upper },
		{ 'b', print_binary },
		{ 'u', print_unsigned },
		{ 'R', print_rot13 },
		{ 0, NULL }
	};

	while (p[j].ch)
	{
		if (p[j].ch == ch)
		{
			count += p[j].print(list);
			break;
		}
		++j;
	}
	return (count);
}
