#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: This program prints all single-digit numbers
 * in base 10, starting from 0 and followed by a new line,
 * using the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 1; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
