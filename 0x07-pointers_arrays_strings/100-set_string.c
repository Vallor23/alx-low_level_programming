#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char whose address will be assigned to *s.
 *
 * Description: This function takes a pointer to a pointer to a char 's' and
 * a pointer to a char 'to'. It sets the value of 's' to the address of 'to'.
 */
void set_string(char **s, char *to)
{
*s = to;
}

