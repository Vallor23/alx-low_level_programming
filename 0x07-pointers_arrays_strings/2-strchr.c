#include <stddef.h>

/**
 * _strchr - Locate a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Description: This function searches for the first occurrence
 * of the character 'c'
 * in the string 's'. If 'c' is found,
 * a pointer to the first occurrence is returned.
 * If 'c' is not found, NULL is returned.
 *
 * Return: A pointer to the first occurrence of
 * 'c' in 's', or NULL if not found.
 */
char *_strchr(char *s, char c)
{
if (s == NULL)
return (NULL);

while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

/* If 'c' is not found, return NULL*/
return (NULL);
}

