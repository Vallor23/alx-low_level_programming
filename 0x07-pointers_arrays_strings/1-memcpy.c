#include <stddef.h>

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Description: This function copies 'n' bytes from the 'src'
 * memory area to the
 * 'dest' memory area. If 'src' and 'dest' overlap,
 * the behavior is undefined.
 *
 * Return: A pointer to the destination memory area 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = dest;

if (dest == NULL || src == NULL)
return (NULL);

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (start);
}

