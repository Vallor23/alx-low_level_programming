 #include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 *              ranging from 00 to 99, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)15.       {
15.        for (j = i; j <= 99; j++)
16.    {
16.            putchar((i / 10) + '0');
17.            putchar((i % 10) + '0');
18.            putchar(' ');
19.            putchar((j / 10) + '0');
20.            putchar((j % 10) + '0');
21.
22.            if (i != 99 || j != 99)
23.     {
24.                putchar(',');
25.                putchar(' ');
26.            }
27.        }
28.    }
29.
30.   putchar('\n');
31.
32.    return (0);
33.}
