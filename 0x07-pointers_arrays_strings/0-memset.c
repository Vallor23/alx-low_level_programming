#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n) {
char *start = s;

if (s == NULL || n == 0) {
        return NULL;
    }
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }

    return start;
}
