#include "main.h"

/**
 * main - function that prints all natural numbers 
 *
 * Return: Always 0.
 */
int natural_numbers(int n)
{
	int n = 0;
	for(n < 98)
	{
		putchar(n + '0')
		if( n < 97)
		{
		putchar( ',');
		putchar( ' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
