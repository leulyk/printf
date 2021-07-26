#include "holberton.h"
#include <unistd.h>
int flags2(const char *, int *, va_list *, int, int, int, int);
/**
 * flags - Handles the flags for _printf.
 * @format: Format string.
 * @i: Index.
 * @list: List of arguments.
 * Return: Number of chars printed.
 */
int flags(const char *format, int *i, va_list *list)
{
short p = 0, s = 0, h = 0;
int n = *i, num, ret = 0;

while (1)
{
switch (format[n])
{
case '+':
p++;
n++;
break;
case ' ':
s++;
n++;
break;
case '#':
h++;
n++;
break;
case 'd':
case 'i':
num = va_arg(*list, int);
if (num >= 0 && (p || s))
ret += write(1, p ? "+" : " ", 1);
ret += print_number(num, 1);
(*i) += p + s + h;
return (ret);
case 'o':
num = va_arg(*list, int);
if (h)
ret += write(1, "0", 1);
ret += print_base(num, 8, 0);
(*i) += p + s + h;
return (ret);
default:
return (flags2(format, i, list, n, h, p, s));
}
}
}
/**
 * flags2 - Handles the flags for _printf.
 * @f: Format string.
 * @i: Index.
 * @list: List of arguments.
 * @n: Current evaluated index.
 * @h: Number of hashtags.
 * @p: Number of plus signs.
 * @s: Number of spaces.
 * Return: Number of chars printed.
 */
int flags2(const char *f, int *i, va_list *list, int n, int h, int p, int s)
{
int num, ret = 0;

switch (f[n])
{
case 'x':
num = va_arg(*list, int);
if (h)
ret += write(1, "0x", 2);
ret += print_base(num, 16, 0);
(*i) += p + s + h;
return (ret);
case 'X':
num = va_arg(*list, int);
if (h)
ret += write(1, "0X", 2);
ret += print_base(num, 16, 2);
(*i) += p + s + h;
return (ret);
default:
ret += write(1, "%", 1);
if (h)
ret += write(1, "#", 1);
if (p)
ret += write(1, "+", 1);
else if (s)
ret += write(1, " ", 1);
(*i) += p + s + h - 1;
return (ret);
}
}
