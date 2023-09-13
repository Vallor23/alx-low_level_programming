#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Description:
 * This program calculates and prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma
 * and a space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long int fib1 = 1, fib2 = 2, next;
int count, maxCount = 50;

printf("%lld, %lld", fib1, fib2);

for (count = 3; count <= maxCount; count++)
{
next = fib1 + fib2;
printf(", %lld", next);
fib1 = fib2;
fib2 = next;
}

printf("\n");
return (0);
}

