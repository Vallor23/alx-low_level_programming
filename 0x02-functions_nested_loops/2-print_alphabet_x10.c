#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase x10 followed by a new line
 */
void print_alphabet(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
j=97;

while (j <= 122)
j++;
{
_putchar(j);
}
_putchar('\n');
}
}
