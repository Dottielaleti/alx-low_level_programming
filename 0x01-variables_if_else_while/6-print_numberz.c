#include <stdio.h>

/**
 * main - prints 0-9 using putchar()
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
