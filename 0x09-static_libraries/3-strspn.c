#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[a] - s2[a]
 */
unsigned int _strspn(char *s1, char *s2)
{
int a = 0;
while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
a++;
}
return (0);
}
