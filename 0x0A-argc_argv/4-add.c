#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
int sum = 0;
bool hasNonDigit = false;
int i;
/* Check if there are no numbers provided */
if (argc == 1)
{
printf("0\n");
return (0);
}

/* Iterate through command-line arguments and add positive numbers */
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);

/* Check if the argument contains non-digit characters */
if (num == 0 && argv[i][0] != '-')
{
hasNonDigit = true;
break;
}

/* Check if the number is positive */
if (num > 0)
{
sum += num;
}
}

/* Print the result or an error message */
if (hasNonDigit)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", sum);
return (0);
}
}

