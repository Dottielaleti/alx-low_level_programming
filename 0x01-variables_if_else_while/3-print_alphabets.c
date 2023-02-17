#include <stdio.h>

/**
 * main - prints alphabet characters a-z and A-Z using putchar()
 *
 * Return: always 0
 */
int main(void)
{
	char ch, CH;

	ch = 'a';
	CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
