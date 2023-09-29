#include <stdio.h>
/**
 * _sqrt_recursive - Finds the natural square root of a number recursively.
 * @n: The input number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Description: This recursive function calculates the natural
 * square root of a non-negative
 * integer 'n' with an initial guess 'guess'.
 * It returns -1 if 'n' does not have a natural
 * square root.
 *
 * Return: The natural square root of 'n', or -1 if 'n'
 * does not have a natural square root.
 */
int _sqrt_recursive(int n, int guess)
{
if (n < 0)
{
return (-1); /* Return -1 for negative input as an error indicator */
}
else if (guess * guess == n)
{
return (guess); /* Base case: Found the square root */
}
else if (guess * guess > n)
{
return (-1); /* The square root is not a whole number, return -1 */
}
else
{
/*Recursive calculation: Increase guess*/
return (_sqrt_recursive(n, guess + 1));
}
}
/**
 * _sqrt_recursion - Wrapper function to find the square root.
 * @n: The input number for which to calculate the square root.
 *
 * Description: This function is a wrapper that sets up
 * the initial guess for
 * finding the square root of 'n' using recursion.
 *
 * Return: The natural square root of 'n', or -1 if 'n' does
 * not have a natural square root.
 */
int _sqrt_recursion(int n)
{
return (_sqrt_recursive(n, 0)); /*start with an initial guess of 0*/
}
