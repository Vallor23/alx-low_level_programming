#include "main.h"

/**
 * print_square - Prints a square of a specified size.
 * @size: The size of the square.
 *
 * Description: This function prints a square made of '#' characters.
 * If size is 0 or less, it prints only a new line.
 */
void print_square(int size)
{
int i;
int j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
