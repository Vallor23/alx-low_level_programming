#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase and uppercase alphabe
 * followed by a newline using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

/* Print lowercase alphabet*/
while (letter <= 'z')
{
putchar(letter);
letter++;
}

letter = 'A';  /* Reset letter to 'A' for uppercase*/
/* Print uppercase alphabet*/
while (letter <= 'Z')
{
putchar(letter);
letter++;
}

/* Print a newline character*/
putchar('\n');

return (0);
}
