#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
