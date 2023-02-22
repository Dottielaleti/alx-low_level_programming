#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: The number in question
 *
 * Return: last digit
 */
int print_lastdigit(int n)
{
	int lastdigit = - (n % 10);
        if (n < 0 )
		_putchar (lastdigit);
	return (lastdigit);
}
