#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer for which the absolute value needs to be computed.
 *
 * Return: The absolute value of the input integer.
 */
int _abs(int n)
{
/* Check if the number is negative */
if (n < 0)
{
return (-n); /* Return the negation of n (absolute value) */
}
else
{
return (n); /* Return n as it's already positive or zero */
}
}

