#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks digit of a number is > 5, < 6 and != zero or is 0
 * Return: Always 0
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	} else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}

	return (0);
}
