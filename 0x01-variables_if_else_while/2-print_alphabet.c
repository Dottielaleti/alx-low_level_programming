#include <stdio.h>

/**
 * main - prints alphabet characters a - z using putchar()
 *
 * Return: always 0
 */
int main()
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return 0;
}
