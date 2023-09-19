#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    if (s == NULL)
        return;

    int length = 0;
    int start = 0;
    int end = 0;

    // Calculate the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    end = length - 1;

    // Swap characters from start to end to reverse the string
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

