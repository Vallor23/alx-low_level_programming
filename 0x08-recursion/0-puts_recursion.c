#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a newline.
 * @s: The input string to be printed.
 *
 * Description: This function prints the characters of a string recursively,
 *              followed by a newline character ('\n').
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
/* Print a newline character when the end of the string is reached */
putchar(*s);
return;
}

putchar(*s); /* Print the current character */
/* Call the function recursively with the next character in the string */
_puts_recursion(s + 1);
}
