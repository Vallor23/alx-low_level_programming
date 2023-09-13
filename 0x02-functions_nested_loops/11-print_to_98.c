#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: The starting number.
 */
void print_to_98(int n)
{
int row, column, product;
 if (n < 0 || n > 15)
        return;
 for (row = 0; row <= n; row++)
    {
        for (column = 0; column <= n; column++)
        {
            product = row * column;

            if (column != 0)
            {
                _putchar(',');
_putchar(' ');
            }

            if (product < 10)
            {
                _putchar(' ');
_putchar(' ');
}
else if (product < 100)
{
_putchar(' ');
}
if (product >= 100)
_putchar('0' + product / 100);
if (product >= 10)
_putchar('0' + (product / 10) % 10);
_putchar('0' + produt % 10);
}
_putchar('\n');
}
}

