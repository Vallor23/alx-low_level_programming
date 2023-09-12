#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers, separated by ", ", in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + 48); /** Convert the number to its ASCII
			* representation and print
			*/
if (number < 9)
{
putchar(',');   /* Print the comma*/
putchar(' ');   /* Print the space*/
}
number++;
}

putchar('\n'); /* Print a newline character*/

return (0);
}

