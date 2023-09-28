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
int _sqrt_recursion(int n)
{
int result = -1;
int i;
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
/*Iterate from 1 to n/2 to find the square root*/
for (i = 1; i <= n / 2; i++)
{
if (i * i == n)
{
result = i;
break; /*Square root found, exit the loop*/
}
}

return (result);
}
}

