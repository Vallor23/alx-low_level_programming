/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the accepted characters.
 *
 * Description: This function calculates the length of the maximum initial
 * segment of the string 's' that consists entirely of characters from the
 * string 'accept'.
 *
 * Return: The number of bytes in the initial segment of 's' that consist only
 * of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
/*Initialize a boolean array to track accepted characters.*/
int is_accept[256] = {0};

/*Populate the is_accept array to mark accepted characters.*/
while (*accept)
{
is_accept[(int)*accept] = 1;
accept++;
}

/*Count the number of accepted characters at the beginning of 's'.*/
while (*s && is_accept[(int)*s])
{
length++;
s++;
}

return (length);
}

