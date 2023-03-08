#include "main.h"

/**
 * int factorial - returns factorial
 * @n: int
 *
 * Return: int
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
		else if (n < 0)
		{
			return (-1);
			else
			{
				i * factorial(n - 1);
			}
			return(i);
		}
	}
}
