#include <stdio.h>
#include <stdlib.h>
/**
 * isAllDigits - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int isAllDigits(char *str);
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 if successful, 98 if there are errors
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    for (int i = 0; num1[i]; i++)
    {
        if (!isdigit(num1[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2[i]; i++)
    {
        if (!isdigit(num2[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    int result = atoi(num1) * atoi(num2);

    printf("%d\n", result);

    return 0;
}

