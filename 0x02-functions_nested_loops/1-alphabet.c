#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 *
 * Return: Always 0
 */
int main (void)
{
	int ch;

	ch = 'a'

	while (ch<='z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	
	return (0);		
}
