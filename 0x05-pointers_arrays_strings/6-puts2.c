#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: The string to be processed.
 */
void puts2(char *str)
{
int i = 0;
if (str == NULL)
return;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2; /*Skip every other character*/
}

putchar('\n');
}
