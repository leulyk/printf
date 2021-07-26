#include "holberton.h"
/**
 * print_base - Print a number in a specified base.
 * @number: Number to convert.
 * @base: Base to print the number.
 * @upper: Selects uppercase mode for hex.
 * Return: Number of characters printed.
 */
int print_base(unsigned int number, short base, short upper)
{
char ans[32], *comp;
char low[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c',
		'd', 'e', 'f'};
char up[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
	       'D', 'E', 'F'};
int i = 0, c = 0;

if (upper)
{
comp = up;
}
else
{
comp = low;
}
while (number / base)
{
ans[i++] = comp[number % base];
number /= base;
}
ans[i] = comp[number % base];
while (i >= 0)
{
while (ans[i] == 0)
i--;
_putchar(ans[i--]);
c++;
}
return (c);
}
