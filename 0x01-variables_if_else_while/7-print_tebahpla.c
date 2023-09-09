#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line, using the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 122; n <= 97; n--)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
