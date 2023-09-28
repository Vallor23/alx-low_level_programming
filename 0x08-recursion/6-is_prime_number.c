#include <stdio.h>

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input number to be checked for primality.
 *
 * Description: This function determines whether a
 * positive integer 'n' is a prime number.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0); /*Numbers less than or equal to 1 are not prime*/
}
else if (n <= 3)
{
return (1); /* 2 and 3 are prime numbers*/
}
else if (n % 2 == 0 || n % 3 == 0)
{
return (0); /*Numbers divisible by 2 or 3 are not prime*/
}
else
{
int i;
/*Check for divisibility by numbers of the form 6k ± 1*/
for (i = 5; i * i <= n; i += 6)
{
if (n % i == 0 || n % (i + 2) == 0)
{
return (0); /*Not a prime number*/
}
}
return (1); /*Prime number*/
}
}

