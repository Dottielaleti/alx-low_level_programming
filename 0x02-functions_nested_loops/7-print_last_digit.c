#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of last digit.
 */
int print_lastdigit(int)
{
	int lastdigit = - (n % 10);
        if (n < 0 )
		_putchar (lastdigit);
	return (lastdigit);
}
