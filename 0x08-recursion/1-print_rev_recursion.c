#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The input string to be printed in reverse.
 *
 * Description: This function prints the characters of a
 * string in reverse order
 *              using recursion.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return; /* Base case: Do nothing when the end of the string is reached */
}

_print_rev_recursion(s + 1); /*
			      *Recursively call the
			      *function with the next character
			      */
putchar(*s); /* Print the current character after the recursive call */
}
