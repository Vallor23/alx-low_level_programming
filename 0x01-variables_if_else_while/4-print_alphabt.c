#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e',
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
}
write(1, &letter, 1);
}
letter++;
}
write(1, "\n", 1);

return (0);
}
