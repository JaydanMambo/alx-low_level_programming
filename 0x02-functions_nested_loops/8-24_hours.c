#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59
 * Return: void(nothing)
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* Print tens digit of hour */
			_putchar((hour / 10) + '0');
			/* Print ones digit of hour */
			_putchar((hour % 10) + '0');
			_putchar(':');
			/* Print tens digit of minute */
			_putchar((minute / 10) + '0');
			/* Print ones digit of minute */
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
