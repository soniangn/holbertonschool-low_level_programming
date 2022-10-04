#include "main.h"
/**
 * jack_bauer - entry point
 * Description: prints every minute of Jack Bauer starting from 00:00 to 23:59
 * Return: the time
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 00; hours <= 23; hours++)
		for (minutes = 00; hours <= 59; minutes++)
			_putchar(hours);
			_putchar(':');
			_putchar(minutes);
}
