#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (*s)
{
length++;
s++;
}

return (length);
}

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The string to be processed.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int i;
if (str == NULL)
return;

if (length % 2 == 0) /* Even-length string*/
{
i = length / 2;
}
else /* Odd-length string*/
{
i = (length - 1) / 2;
}

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}

