#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("The number: %d\n);

	/*check whether the number is positive, negative, or zero*/
	if (n>0)
	{
		printf("is positive\n");

	}
	else if (n<0)
	{
		printf("is negative\n";
	}
	else
	{
	        printf("is zero");

	}


	return (0);
}
