#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0'); /* Print first digit of hour */
			_putchar((hour % 10) + '0'); /* Print second digit of hour */
			_putchar(':');
			_putchar((minute / 10) + '0'); /* Print first digit of minute */
			_putchar((minute % 10) + '0'); /* Print second digit of minute */
			_putchar('\n');
		}
	}
}
