#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle made of '#' characters.
 * @size: The size of the triangle.
 *
 * Description:
 * This function prints a triangle with the specified
 * size using '#' characters.
 * If size is 0 or less, the function prints only a new line.
 */

void print_triangle(int size)
{
int row;
int space;
int hash;
if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
{
_putchar(' ');
}
for (hash = 1; hash <= row; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
