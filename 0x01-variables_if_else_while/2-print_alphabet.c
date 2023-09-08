#include <stdio.h>
/**
 * main - entry point
 * description: 'program that prints in lower case'
 * return : always 0
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

