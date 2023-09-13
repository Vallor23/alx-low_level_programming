#include <stdio.h>

/**
 * main - Calculates and prints the first 98 Fibonacci numbers.
 *
 * Description:
 * This program calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by a
 * comma and a space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, next;
int count, maxCount = 98;
printf("%lu, %lu", fib1, fib2);

for (count = 3; count <= maxCount; count++)
{
next = fib1 + fib2;
printf(", %lu", next);
fib1 = fib2;
fib2 = next;
}

printf("\n");
return (0);
}
