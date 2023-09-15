#include "main.h"
#include <stdio.h>

void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (int row = 1; row <= size; row++)
    {
        for (int space = size - row; space > 0; space--)
        {
		_putchar(' ');
        }
        for (int hash = 1; hash <= row; hash++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
