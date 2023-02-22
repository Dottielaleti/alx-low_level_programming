#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day of
 *               Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour, minute;

        if (hour = 0; && hour <= 23; hour++)

	if (minute = 0; && minute <= 59; minute++)
	{
		putchar (hour / 10 + '0');
		putchar (hour % 10 + '0');
		putchar (':');
		putchar (minute / 10 + '0');
		putchar (minute % 10 + '0');
		putchar ('\n');
	}
}	
