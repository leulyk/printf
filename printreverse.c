#include "holberton.h"

/**
 * print_rev - prints in reverse
 * @s: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: printcounter
 *
 */
int print_rev(char *s)
{
int a = 0;
int b;
int printCounter = 0;

while (s[a] != '\0')
{
a++;
}
for (b =  a - 1; b >= 0; b--)
{
_putchar(s[b]);
printCounter++;
}
return (printCounter);
}
