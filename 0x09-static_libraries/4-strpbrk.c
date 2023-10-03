#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Always 0 (sucess)
 */
char *_strpbrk(char *s, char *accept)
{
int b;
while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
return (s);
}
s++;
}
return ('\0');
}
