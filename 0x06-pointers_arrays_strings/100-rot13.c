#include "main.h"
#include <stdio.h>

/**
 * @brief Concatenates two strings.
 *
 * This function appends the characters of the src string to the dest string,
 * overwriting the null terminator ('\0') at the end of dest, and then adds a
 * new null terminator at the end.
 *
 * @param dest The destination string to which src will be appended.
 * @param src The source string that will be appended to dest.
 * @return A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *original_dest = dest;

/* Move dest to the end of the string*/
while (*dest != '\0')
{
dest++;
}

/*Copy characters from src to dest until the end of src*/
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

/* Add a null terminator to the end*/
*dest = '\0';

return (original_dest);
}
