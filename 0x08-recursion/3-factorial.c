#include <stdio.h>

/**
 * factorial - Computes the factorial of a number.
 * @n: The input number for which to calculate the factorial.
 *
 * Description: This function calculates the
 * factorial of a non-negative integer 'n'.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1); /*Return -1 for negative input as an error indicator*/
}
else if (n == 0 || n == 1)
{
return (1); /*Base case: factorial of 0 and 1 is 1*/
}
else
{
return (n * factorial(n - 1)); /*Recursive calculation: n! = n * (n-1)!*/
}
}
