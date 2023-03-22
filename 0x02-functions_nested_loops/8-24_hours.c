#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bouer(void);
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_ putchar((hour / 10) + '0');
			_ putchar((hour % 10) + '0');
			_ putchar(':');
			_ putchar((minute / 10) + '0');

			_ putchar((minute % 10) + '0');
			_ putchar('\n');
		}
	}
}
