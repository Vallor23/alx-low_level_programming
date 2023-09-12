#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table,
 * starting with 0, in the desired format.
 */
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;

/* Print each digit of the result */
if (result < 10)
{
putchar(result + '0');
}
else
{
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}

/* Print comma and spaces, or dollar sign and newline */
if (j < 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('$');
putchar('\n');
}
}
}
}

