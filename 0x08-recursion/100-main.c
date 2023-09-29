#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The input string to check.
 * @start: The index of the starting character.
 * @end: The index of the ending character.
 *
 * Description: This function checks if the substring from 'start' to 'end' in the string 's'
 * is a palindrome using recursion.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1; // Base case: The substring is a palindrome
    }
    else if (s[start] != s[end])
    {
        return 0; // Characters at start and end do not match, not a palindrome
    }
    else
    {
        return is_palindrome_recursive(s, start + 1, end - 1); // Check the next characters
    }
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to check.
 *
 * Description: This function checks if the entire string 's' is a palindrome.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = strlen(s);

    if (length <= 1)
    {
        return 1; // An empty string or a single character is a palindrome
    }
    else
    {
        return is_palindrome_recursive(s, 0, length - 1); // Start checking from both ends
    }
}

