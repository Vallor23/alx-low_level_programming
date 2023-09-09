#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet
 *              followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';  /* Start with 'a'*/

while (letter <= 'z')
{
putchar(letter);  /* Print the current letter*/
letter++;         /* Move to the next letter*/
}

putchar('\n');  /* Print a newline character*/

return (0);
}
