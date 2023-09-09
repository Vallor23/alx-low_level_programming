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
for (char letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter); /* Print the current letter */
}

putchar('\n'); /* Print a newline character */

return (0);
}
