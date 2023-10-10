#include <stdio.h>
#include "dog.h"

/**
 * print_dog-  prints the elements of astructure dog
 * @d: Pointer to struct dog to print
 *
 * Description: This function prints information about dog
 * including its name, age and owner.
 * If any of these elements is NULL, it prints "(nil)" instead.
 */

void print_dog(struct dog *d)
{
/*We check if d is not NULL before attempting to access its members.*/
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
