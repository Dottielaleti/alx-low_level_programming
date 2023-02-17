#include <stdio.h>

/**
 * main - print 0-9 comma separated
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
