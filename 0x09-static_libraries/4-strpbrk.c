#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Description: This function searches for the first
 * occurrence in the string 's'
 * of any of the bytes specified in the string 'accept'.
 * It returns a pointer to the byte in 's' that matches one
 * of the bytes in 'accept', or NULL if no such byte is found.
 *
 * Return: A pointer to the byte in 's' that matches one
 * of the bytes in 'accept',or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
if (s == NULL || accept == NULL)
return (NULL);

while (*s != '\0')
{
char *temp = accept;
while (*temp != '\0')
{
if (*s == *temp)
return (s);
temp++;
}
s++;
}
/*No matching byte found in 's'.*/
return (NULL);
}

