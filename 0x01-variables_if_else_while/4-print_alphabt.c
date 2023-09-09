#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e',
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
