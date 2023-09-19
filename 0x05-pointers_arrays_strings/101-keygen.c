#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
    /*Seed the random number generator with the current time*/
    srand((unsigned int)time(NULL));

    /* Define the characters that can be used in the password*/
    char valid_characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    printf("Random Passwords:\n");

    for (int i = 0; i < 10; i++) /* Generate 10 random passwords*/
    {
        char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator*/
        for (int j = 0; j < PASSWORD_LENGTH; j++)
        {
            /*Generate a random index within the range of valid_characters*/
            int index = rand() % (sizeof(valid_characters) - 1);
            password[j] = valid_characters[index];
        }
        password[PASSWORD_LENGTH] = '\0'; /*Null-terminate the password*/

        printf("%s\n", password);
    }

    return 0;
}

