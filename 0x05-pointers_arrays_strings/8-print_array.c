#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;
    for (i = 0; i < n; i++)
    if (a == NULL || n <= 0)
        return;

    {
        printf("%d", a[i]);

        if (i < n - 1) /*Add a comma and a space for all elements except the last one*/
            printf(", ");
    }

    printf("\n");
}

