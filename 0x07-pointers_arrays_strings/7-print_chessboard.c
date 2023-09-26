#include "main.h"
#include <unistd.h> /*Include the header for _putchar*/

/**
 * print_chessboard - Prints a chessboard.
 * @a: A pointer to a 2D array representing the chessboard.
 *
 * Description: This function takes a pointer to a
 * 2D array 'a' representing a
 * chessboard and prints the chessboard to the standard output
 * using _putchar.
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
_putchar(' ');
}
_putchar('\n');
}
}

