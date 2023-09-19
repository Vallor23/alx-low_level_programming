#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values of two integers pointed to by 'a' and 'b'.
 */
void swap_int(int *a, int *b)
{
    int temp;

    if (a == NULL || b == NULL)
        return;

    temp = *a;
    *a = *b;
    *b = temp;
}
