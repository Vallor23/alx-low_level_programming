#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints all possible different combinations of two digits.
 * - Numbers are separated by a comma and space.
 * - The two digits must be different.
 * - 01 and 10 are considered the same combination of the two digits 0 and 1.
 * - Only the smallest combination of two digits is printed.
 * - Numbers are printed in ascending order with two digits.
 * - Only the putchar function is used (maximum of five times).
 * - No variables of type char are used.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int digit1, digit2;
/* Loop through all possible first digits (0 to 8) */
for (digit1 = 0; digit1 <= 9; digit1++)
{
/* Loop through all possible second digits (i+1 to 9) */
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{

/* Print the first digit */
putchar(digit1 + '0');
/* Print the second digit */
putchar(digit2 + '0');
/* Print a comma and space separator */
putchar(',');
putchar(' ');

/* Print a newline if not the last combination */
if (!(digit1 == 8 && digit2 == 9))
{
putchar('\n');
}
}
}

return (0);
}
