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
        putchar('\n'); /* Print a newline character when the end of the string is reached */
        return;
    }

    putchar(*s); /* Print the current character */
    _puts_recursion(s + 1); /* Call the function recursively with the next character in the string */
}
