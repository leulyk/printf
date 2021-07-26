#include "holberton.h"
#include <unistd.h>
/**
 * case_p - print address
 * @ptr: pointer
 * Return: print counts
 */
int case_p(unsigned long int ptr)
{
int counter = 0, i = 0;
char cmp[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c',
		'd', 'e', 'f'};
char ans[16];

if (!ptr)
return (write(1, "(nil)", 5));
counter += write(1, "0x", 2);
while (ptr / 16)
{
ans[i++] = cmp[ptr % 16];
ptr /= 16;
}
ans[i] = cmp[ptr % 16];
while (i >= 0)
{
_putchar(ans[i--]);
counter++;
}
return (counter);

}
