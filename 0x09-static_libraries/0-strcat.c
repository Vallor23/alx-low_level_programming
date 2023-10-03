#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenate two strings.
 * @dest: Destination string where src will be appended.
 * @src: Source string to be appended to dest.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte. The resulting string is stored in dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *result = dest;

/* Find the end of the destination string */
while (*dest)
dest++;

/* Append characters from src to dest */
while (*src)
{
*dest = *src;
dest++;
src++;
}

/* Add a terminating null byte */
*dest = '\0';

return (result);
}
