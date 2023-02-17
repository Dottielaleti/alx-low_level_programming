#include <stdio.h>

/**
 * main - print base16 numbers
 *
 * Return: always 0
 */
int main(void)
{
	int num;
	char ch;

	num = 0;
	ch = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
