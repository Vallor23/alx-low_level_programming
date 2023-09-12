#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given
 * integer and returns its value.
 * @n: The integer for which the last digit needs to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;  /*Calculate the last digit*/
if (lastDigit < 0)
{
lastDigit *= -1;  /*Make the last digit positive if it's negative*/
}
/*Print the last digit using _putchar*/

_putchar('0' + lastDigit);

return (lastDigit);
}
