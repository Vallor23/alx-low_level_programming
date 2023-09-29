#include <stdio.h>

/**
 * wildcmp - Compares two strings allowing wildcard character '*'.
 * @s1: The first input string.
 * @s2: The second input string with wildcard '*'.
 *
 * Description: This recursive function compares two strings,
 * where the second string 's2'
 * can contain the special character '*' to represent any string
 * (including an empty string).
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
{
return (1); /* Both strings are empty or s2 can match an empty string */
}
}
else if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
{
/* s2 matches either by ignoring '*' or by matching s1's next character */
return (1);
}
}
else if (*s1 == *s2 || *s2 == '?')
{
if (wildcmp(s1 + 1, s2 + 1))
{
return (1); /* Characters match, continue comparing the rest of the strings */
}
}

return (0); /* No match found */
}

