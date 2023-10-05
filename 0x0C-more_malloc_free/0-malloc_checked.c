#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate in bytes
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, exit with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98); /*Terminate the process with status 98 on malloc failure*/
}

 return (ptr);
}

