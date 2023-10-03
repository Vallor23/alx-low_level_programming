#include <stddef.h>

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
if (haystack == NULL || needle == NULL)
return (NULL);

while (*haystack != '\0')
{
char *start = haystack;
char *sub = needle;

while (*sub != '\0' && *haystack == *sub)
{
haystack++;
sub++;
}
if (*sub == '\0')
{
/*The entire 'needle' was found in 'haystack'.*/
return (start);
}

haystack = start + 1;
}
return (NULL); /* 'needle' was not found in 'haystack'.*/
}
