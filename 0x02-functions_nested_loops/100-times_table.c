#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The value for which to print the times table.
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return; // Do nothing if n is out of the valid range
}

int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j > 0)
{
printf(", "); // Add a comma and space before each number (except the first)
}
if (result < 10)
{  
 printf("  %d", result); // Single-digit number with two leading spaces
} else if (result < 100)
{
printf(" %d", result); // Two-digit number with one leading space
} else
{

printf("%d", result); // Three-digit number with no leading space
}
}
printf("\n"); // Newline after each row
}
}
