#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * conv - Handles conversion specifiers for _printf
 * @format: Format string.
 * @i: Current position of format.
 * @c: Printed character count.
 * @list: List of arguments.
 * Return: 1 if conversion handled, 0 otherwise.
 */
short conv2(const char *format, int *i, int *c, va_list *list);
short conv(const char *format, int *i, int *c, va_list *list)
{
char ch, *str;
unsigned int num, len;
int n;

switch (format[*i])
{
case 'c':
ch = (char)va_arg(*list, int);
write(1, &ch, 1);
(*c)++;
return (1);
case 's':
str = va_arg(*list, char *);
if (!str)
str = "(null)";
len = _strlen(str);
write(1, str, len);
(*c) += len;
return (1);
case 'd':
case 'i':
n = va_arg(*list, int);
n = print_number(n, 1);
(*c) += n;
return (1);
case 'b':
num = va_arg(*list, int);
(*c) += print_base(num, 2, 0);
return (1);
case 'o':
num = va_arg(*list, int);
(*c) += print_base(num, 8, 0);
return (1);
case 'x':
num = va_arg(*list, int);
(*c) += print_base(num, 16, 0);
return (1);
default:
return (conv2(format, i, c, list));
}
}
/**
 * conv2 - Handles conversion specifiers for _printf
 * @format: Format string.
 * @i: Current position of format.
 * @c: Printed character count.
 * @list: List of arguments.
 * Return: 1 if conversion handled, 0 otherwise.
 */
short conv2(const char *format, int *i, int *c, va_list *list)
{
unsigned int num;
char *str;
int *p;

switch (format[*i])
{
case 'X':
num = va_arg(*list, int);
(*c) += print_base(num, 16, 1);
return (1);
case 'u':
num = va_arg(*list, int);
(*c) += print_number(num, 0);
return (1);
case 'r':
str = va_arg(*list, char *);
(*c) += print_rev(str);
return (1);
case 'R':
str = va_arg(*list, char *);
(*c) += rot13(str);
return (1);
case 'S':
str = va_arg(*list, char *);
if (!str)
str = "(null)";
(*c) += spchr(str);
return (1);
case 'p':
p = va_arg(*list, int *);
(*c) += case_p((long int)p);
return (1);
case '+':
case ' ':
case '#':
(*c) += flags(format, i, list);
return (1);
case '%':
return (0);
default:
(*i)--;
return (0);
}
}
