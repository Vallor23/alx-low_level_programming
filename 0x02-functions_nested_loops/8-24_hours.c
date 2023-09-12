#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Description: This function prints every
 * minute of the day in the format "HH:MM"
 * where HH represents the hours (00-23) and MM represents the minutes (00-59).
 * The function uses the _putchar function for character output.
 */
void jack_bauer(void)
{
int hrs, mins;
for (hrs = 0; hrs < 24; hrs++)
{
for (mins = 0; mins < 60; mins++)
{
_putchar((hrs / 10) + '0'); /*Print tens digit of hours*/
_putchar((hrs % 10) + '0'); /* Print ones digit of hours*/
_putchar(':'); /* Print colon separator*/
_putchar((mins / 10) + '0'); /* Print tens digit of minutes*/
_putchar((mins % 10) + '0'); /* Print ones digit of minute*/
_putchar('\n'); /* Print newline*/
}
}
}
