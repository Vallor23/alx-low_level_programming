#include <stdio.h>

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The input number for which to calculate the square root.
 *
 * Description: This function calculates the natural
 * square root of a non-negative integer 'n'.
 *
 * Return: The natural square root of 'n', or -1 if 'n'
 * does not have a natural square root.
 */
int _sqrt_recursive(int n, int guess)
{
if (n < 0)
{
return (-1); /*Return -1 for negative input as an error indicator*/
}
else if (n == 0 || n == 1)
{
return (n); /*Base cases: square root of 0 is 0, square root of 1 is 1*/
}
else
{
	return _sqrt_recursive(n, guess + 1); /*Recursive calculation: Increase guess*/
    }
}
/**
 * _sqrt_recursion - Wrapper function to find the square root.
 * @n: The input number for which to calculate the square root.
 *
 * Description: This function is a wrapper that sets up the initial guess for
 * finding the square root of 'n' using recursion.
 *
 * Return: The natural square root of 'n', or -1 if 'n' does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return _sqrt_recursive(n, 0); /*start with an initial guess of 0*/
}
