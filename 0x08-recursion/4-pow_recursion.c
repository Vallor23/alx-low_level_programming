#include <stdio.h>

/**
 * _pow_recursion - Computes x raised to the power of y recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Description: This recursive function calculates x^y using recursion.
 * It returns -1 if y is negative.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1); /* Return -1 for negative exponent as an error indicator */
}
else if (y == 0)
{
return (1); /* Base case: x^0 is 1 */
}
else
{
/* Recursive calculation: x^y = x * x^(y-1) */
return (x * _pow_recursion(x, y - 1));
}
}
