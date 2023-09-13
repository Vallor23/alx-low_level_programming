#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program computes and prints the
 * sum of all the multiples of
 * 3 or 5 below 1024 (excluded), followed by a newline.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int limit = 1024;
int sum = 0;
for (int i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);
return (0);
}
