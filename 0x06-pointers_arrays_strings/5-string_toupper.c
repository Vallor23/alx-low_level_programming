/**
 * string_toupper - Convert lowercase letters in a string to uppercase.
 * @str: Pointer to the input string.
 *
 * Description: This function takes a string as input and converts all
 * lowercase letters in the string to their uppercase equivalent.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}

return (str);
}

