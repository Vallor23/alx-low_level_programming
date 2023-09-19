#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string pointed to
 * by src to the buffer pointed to by dest.
 * @dest: The destination buffer where the string is to be copied.
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

if (dest == NULL || src == NULL)
return (NULL);

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}

*dest = '\0'; /* Append the null terminator to the copied string*/
return (original_dest);
}

