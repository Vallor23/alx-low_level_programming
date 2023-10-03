#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Description: This function finds the first occurrence of
 * the substring 'needle' within the string 'haystack'.
 * The comparison does not include the terminating null
 * bytes ('\0'). It returns a pointer to the beginning of the
 * located substring or NULL if the substring is not found
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *a = haystack;
char *b = needle;
while (*a == *b && *b != '\0')
{
a++;
b++;
}
if (*b == '\0')
return (haystack);
}
return (0);
}
