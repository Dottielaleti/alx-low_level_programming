#include" main.h"
/**
 * more -  function that prints every minute of the day
 *
 * Return: Always 0
 */
int _time(t)
{
	int hours = h;
	int minutes = m;

        for( h = 0; && h <= 23; h++)

	for( m = 0; && m <= 59; m++)
	{
		putchar(h / 10 + '0');
		putchar(h % 10 + '0');
		putchar(':');
		putchar(m / 10 + '0');
		putchar(m % 10 + '0');
		putchar('\n');
	}
	return (0);
}	
