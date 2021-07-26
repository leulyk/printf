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
	while (*format && *(format + index))
	{
		while (*(format + index) != '%')
		{
			if (*(format + index))
				_putchar(*(format + index));
			else
				break;
			count++;
			index++;
		}
		if (!format[index])
			return (count);
		else if (*(format + index) == '%')
		{
			index++;
			c = *(format + index);
			if (c == 'c')
				_putchar(va_arg(data, int));
			else if (c == '%')
				_putchar('%');
			else
				count += process_format(data, c);
		}
		index++;
		count++;
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
		{ 's', print_string },
		{ 'd', print_integer },
		{ 'i', print_integer },
		{ 'o', print_octal },
		{ 'x', print_hex_lower },
		{ 'X', print_hex_upper },
		{ 'b', print_binary },
		{ 'u', print_integer },
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
