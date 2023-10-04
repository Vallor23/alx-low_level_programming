#include <stdio.h>
#include "main.h"
/**
 * main - Count and print the number of command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
/* Subtract 1 to exclude the program name itself */
printf("%d\n", argc - 1);

return (0);
}
