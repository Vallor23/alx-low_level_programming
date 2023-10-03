#include "main.h"

/**
 * _memset - Program fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: Number of bytes to be filled starting from ptr to be filled
 *
 * Return: change array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{s[a] = b;
n--;
}
return (s);
}
