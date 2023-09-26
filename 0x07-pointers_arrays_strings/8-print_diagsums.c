#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: The size of the square matrix.
 *
 * Description: This function calculates the sum of the main
 * diagonal (from the top-left
 * to the bottom-right) and the secondary diagonal
 * (from the top-right to the bottom-left)
 * of a square matrix and prints both sums.
 */
void print_diagsums(int *a, int size)
{
int sum_main = 0; /*Sum of the main diagonal*/
int sum_secondary = 0; /*Sum of the secondary diagonal*/
int i;
for (i = 0; i < size; i++)
{
sum_main += a[i * size + i]; /*Accessing the main diagonal elements*/
/* Accessing the secondary diagonal elements*/
sum_secondary += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", sum_main, sum_secondary);
}

