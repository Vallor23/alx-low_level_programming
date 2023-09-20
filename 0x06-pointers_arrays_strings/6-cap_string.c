#include <ctype.h>

/**
 * cap_string - Capitalize the first letter of each word in a string.
 * @str: Pointer to the input string.
 *
 * Description: This function takes a string as input and capitalizes the
 * first letter of each word in the string. Words are separated by spaces,
 * tabs, new lines, commas, semicolons, periods, exclamation marks, question
 * marks, double quotes, parentheses, and curly braces.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize_next = 1;  /**
* Flag to indicate if the
*next character should be capitalized
*/
while (*ptr)
{
if (capitalize_next && isalpha(*ptr))
{
*ptr = toupper(*ptr);
capitalize_next = 0; /* Reset the flag*/
}
else if (!isalpha(*ptr) && (*ptr == ' ' || *ptr == '\t' ||
*ptr == '\n' || *ptr == ',' ||
*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
*ptr == '}'))
{
capitalize_next = 1; /*Set the flag to capitalize the next word*/
}
ptr++;
}

return (str);
}

