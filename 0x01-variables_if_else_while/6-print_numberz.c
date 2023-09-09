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
putchar('0');     /* Print the digit 0 */
putchar('\n');  /* Print a newline character */

for (int i = 1; i <= 9; i++)
{
putchar(i + '0');  /** Convert the integer to its character
		    * representation and print it
		    */
putchar('\n');      /* Print a newline character after each digit */
}

return (0);
}
