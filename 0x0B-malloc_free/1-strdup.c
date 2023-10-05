#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int len, i;

if (str == NULL)
return (NULL);

len = strlen(str);

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= len; i++)
duplicate[i] = str[i];

return (duplicate);
}
