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
result = i * j;
{
/* Print comma and spaces before each number */
if (j > 0) {
putchar(',');
putchar(' ');
}

/* Print each digit of the result */
 if (result < 10)
{
putchar(' ');
} else
{
putchar(result / 10 + '0');
{
putchar(result % 10 + '0');
/* Print a newline character at the end of each row */        
putchar('\n');
}
}
}
}
}

