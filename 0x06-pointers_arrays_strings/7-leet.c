#include "main.h"
#include <stdio.h>

/**
 * leet - Encode a string into "1337".
 * @str: Pointer to the input string.
 *
 * Description: This function encodes a string by replacing specific
 * characters with their "1337" equivalents: 'a'/'A' with '4',
 * 'e'/'E' with '3',
 * 'o'/'O' with '0', 't'/'T' with '7', and 'l'/'L' with '1'.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
char *ptr = str;

while (*ptr)
{
if ((*ptr | 32) == 'a' || (*ptr | 32) == 'e' || (*ptr | 32) == 'o' ||
(*ptr | 32) == 't' || (*ptr | 32) == 'l')
{
char leet_char = *ptr;
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
{
if (*ptr == 'a' || *ptr == 'A')
leet_char = '4';
else if (*ptr == 'e' || *ptr == 'E')
leet_char = '3';
else if (*ptr == 'o' || *ptr == 'O')
leet_char = '0';
else if (*ptr == 't' || *ptr == 'T')
leet_char = '7';
else if (*ptr == 'l' || *ptr == 'L')
leet_char = '1';
}
*ptr = leet_char;
}
ptr++;
}

return (str);
}
