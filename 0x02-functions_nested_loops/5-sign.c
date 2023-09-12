#include "main.h"

/**
 * Prints the sign of a given integer.
 *
 * This function takes an integer as input and prints the sign of the integer.
 * It returns 1 and prints '+' if the input is greater than zero,
 * returns 0 and prints '0' if the input is zero,
 * returns -1 and prints '-' if the input is less than zero.
 *
 * @param n The integer for which the sign needs to be printed.
 * @return 1 if n > 0, 0 if n == 0, -1 if n < 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar('\n');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar('\n');
return (0);
}
else
{
_putchar('-');
_putchar('\n');
return (-1);
}
}
