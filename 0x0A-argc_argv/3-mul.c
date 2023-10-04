#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Check if the program received exactly two arguments */
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convert command-line arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/* Perform multiplication and store the result */
result = num1 *num2;

/* Print the result followed by a newline */
printf("%d\n", result);

return (0);
}

