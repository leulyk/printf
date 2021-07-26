#include "holberton.h"
/**
 * rot13 - encodes into rot13
 * @cypher: translation
 * Return: printcounter
 */
int rot13(char *cypher)
{
int a;
int b;
int printCounter = 0;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char trans[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

if (!cypher)
cypher = "";
for (a = 0; cypher[a] != '\0'; a++)
{
for (b = 0; b <= 52; b++)
{
if (cypher[a] == in[b])
{
_putchar(trans[b]);
printCounter++;
break;
}
}
if (b == 53)
{
_putchar(cypher[a]);
printCounter++;
}
}
return (printCounter);
}
