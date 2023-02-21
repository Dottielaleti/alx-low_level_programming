#include "main.h"
/**
 * main -  function that prints the sign of a number
 *
 *Return: 1 if n > 0 , 0 if n = 0 , -1 if n < 0
 */
main print_sign(n)
{
	if( n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if( n == 0)
	{
		_putchar('0');
		return (0);
	}
	else( n < '0')
	{
		putchar( '-');
		return (-1);
	}
}
