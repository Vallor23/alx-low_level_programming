#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The value for which to print the times table.
 */
void print_times_table(int n)
{
if (n < 0 && n > 15)
return; /* Do nothing if n is out of range*/

int row, column, product;

for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;
if (column == 0)
{
putchar('0' + product); /* Print the first digit */
}
else
{
putchar(',');
putchar(' ');

if (product < 10)
{
putchar(' '); /* Add a space for single-digit numbers */
}
else if (product < 100)
{
putchar('0' + (product / 10)); /* Print the tens digit */
}
else
{
putchar('0' + (product / 100)); /* Print the hundreds digit */
putchar('0' + ((product / 10) % 10)); /* Print the tens digit */
}

putchar('0' + (product % 10)); /* Print the ones digit */
}
}
putchar('\n');
}
}

