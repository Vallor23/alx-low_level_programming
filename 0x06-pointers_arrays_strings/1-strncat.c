/**
 * _strncat - Concatenate two strings using at most n bytes from src.
 * @dest: Destination string where src will be appended.
 * @src: Source string to be appended to dest.
 * @n: Maximum number of bytes to be appended from src.
 *
 * Description: This function appends at most n bytes from the src string to
 * the dest string. The function stops if it encounters a null byte in src or
 * after copying n bytes, whichever comes first. The resulting string is
 * stored in dest, and a terminating null byte is added.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;

/* Find the end of the destination string */
while (*dest)
dest++;

/* Append at most n characters from src to dest */
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

/* Add a terminating null byte */
*dest = '\0';

return (result);
}

