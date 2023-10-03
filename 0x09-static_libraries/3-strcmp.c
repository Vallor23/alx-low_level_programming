#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Description: This function compares the two strings s1 and s2 and returns an
 * integer value based on their lexicographical order. It returns 0 if both
 * strings are equal, a negative value if s1 is less than s2, and a positive
 * value if s1 is greater than s2.
 *
 * Return: An integer indicating the comparison result.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}

return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
