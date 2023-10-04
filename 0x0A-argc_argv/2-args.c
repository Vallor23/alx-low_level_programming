#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
int i;

/*
 * Loop through all arguments starting from argv[0]
 * and print each argument followed by a newline.
 */
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}

