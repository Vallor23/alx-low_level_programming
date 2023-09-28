#include <stdio.h>

/**
 * is_prime_recursive - Checks if a number is prime recursively.
 * @n: The input number to be checked for primality.
 * @divisor: The current divisor to test divisibility.
 *
 * Description: This function determines whether a positive
 * integer 'n' is a prime number.
 * It uses recursion to test divisibility by increasing divisors
 * starting from 2.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (n <= 1)
{
return (0); /* Numbers less than or equal to 1 are not prime*/
}
else if (divisor == 1)
{
return (1); /* 2 and 3 are prime numbers*/
}
else if (n % divisor == 0)
{
return (0); /*Not a prime number if divisible by divisor*/
}
else
{
/*Recursively check with the next divisor*/
}
return (is_prime_recursive(n, divisor - 1));
}
/**
 * is_prime_number - Wrapper function to check if a number is prime.
 * @n: The input number to be checked for primality.
 *
 * Description: This function calls the recursive function
 * is_prime_recursive
 * with an initial divisor of n - 1.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0); /*0 and 1 are not prime numbers*/
}
else
{
/*Start checking divisibility from n - 1*/
return (is_prime_recursive(n, n - 1));
}
}
