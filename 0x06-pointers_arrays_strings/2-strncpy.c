#include "main.h"
/**
 * _strncpy - Copy at most n characters from src to dest.
 * @dest: Destination string where src will be copied.
 * @src: Source string to be copied to dest.
 * @n: Maximum number of characters to be copied from src.
 *
 * Description: This function copies at most n characters from the src string
 * to the dest string. If src is shorter than n characters, the remaining
 * characters in dest will be padded with null bytes. If src is longer than n
 * characters, only the first n characters are copied. The resulting string in
 * dest is null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;

while (n > 0 && *src) {
*dest = *src;
dest++;
src++;
n--;
}
/* Pad with null bytes if necessary */
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return result;
}

