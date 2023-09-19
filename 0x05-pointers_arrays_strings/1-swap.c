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

int main()
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap_int(&x, &y);

    printf("After swapping: x = %d, y

