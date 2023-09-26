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
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
    char buffer[10];
    char *result;

    result = _memset(buffer, 'A', 5);

    if (result != NULL) {
        printf("Memory filled: %s\n", result);
    } else {
        printf("Memory filling failed.\n");
    }

    return 0;
}

