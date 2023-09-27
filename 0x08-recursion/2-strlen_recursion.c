#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The input string for which to calculate the length.
 *
 * Description: This function calculates and returns the length of a string
 *              using recursion.
 *
 * Return: The length of the string (an integer).
 */
int _strlen_recursion(char *s)
{
/* Base case: Return 0 when the end of the string is reached */
if (*s == '\0')
{
return (0);
}
/*
 * Recursively call the function with the
 * next character and add 1 to the length
 */
return (1 + _strlen_recursion(s + 1));
}
