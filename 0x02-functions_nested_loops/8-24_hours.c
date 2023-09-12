#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Description: This function prints the time in HH:MM format from 00:00 to
 * 23:59, representing every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}

