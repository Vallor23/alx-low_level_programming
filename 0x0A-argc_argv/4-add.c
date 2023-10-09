#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: always 0 (sucess)
 */
int check_num(char *str)
{
int i;
    	for (i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}
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
int i;
    for (i = 1; i < argc; i++) {
        if (check_num(argv[i])) {
            int str_to_int = atoi(argv[i]);
            sum += str_to_int;
        } else {
            printf("Error\n");
            return 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}

