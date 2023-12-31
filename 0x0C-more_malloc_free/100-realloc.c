#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

/* Copy the contents from the old memory block to the new one*/
if (new_size < old_size)
old_size = new_size;

for (i = 0; i < old_size; i++)
{
((char *)new_ptr)[i] = ((char *)ptr)[i];
}

free(ptr);

return (new_ptr);
}
