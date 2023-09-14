#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, each repeated 10 times, followed by a new line.
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i <= 14; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i >= 10)
            {
                _putchar(i / 10 + '0');
            }
            _putchar(i % 10 + '0');
        }
        _putchar('\n');
    }
}
