#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of three digits
 * in ascending order, with each digit being different and separated by a comma
 * followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);

/* Add a comma and space if it's not the last combination*/
if (i < 7 || j < 8 || k < 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}

