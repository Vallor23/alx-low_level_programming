#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description:program prints the message "and that piece of art is useful"
 * Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Return: Always 1
 */
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
}

