#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all lowercase hexadecimal
 * digits (0-9 and a-f)
 * followed by a newline character using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int n = 97;
while (i <= 57)
while (n <= 102)

{
putchar(i);
i++;
putchar(n);
n++;
}

/* Print a newline character */
putchar('\n');

return (0);
}
