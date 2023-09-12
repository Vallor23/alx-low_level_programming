#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all lowercase hexadecimal
 * digits (0-9 and a-f)
 * followed by a newline character using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;        /*ASCII value for '0'*/
int n = 97;       /*ASCII value for 'a'*/
while (i <= 57)/*Print digits '0' to '9'*/
{
putchar(i);
i++;
}
while (n <= 102)      /*Print lowercase letters 'a' to 'f'*/
{
putchar(n);
n++;
}
/* Print a newline character */
putchar('\n');

return (0);
}
