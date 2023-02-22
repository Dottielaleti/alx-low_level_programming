#include "main.h"
/**
 * jack_bauer -  function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hours;
	int minute;

        for (hour = 0; && hour <= 23; hour++)

	for (min = 0; && min <= 59; min++)
	{
		putchar (hour / 10 + '0');
		putchar (hour % 10 + '0');
		putchar (':');
		putchar (minute / 10 + '0');
		putchar (minute % 10 + '0');
		putchar ('\n');
	}
	
}	
