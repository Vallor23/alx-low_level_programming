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
int n = 122;
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
