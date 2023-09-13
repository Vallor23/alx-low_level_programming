#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
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
putchar(' '); /* Add space for single-digit numbers */
}
else
{
putchar((product / 10) + '0'); /* Print the tens digit */
}
putchar((product % 10) + '0'); /* Print the ones digit */
}
}
putchar('\n');
}
}
