#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if a the lastDigit of a number is greater than 5, less than 6 and not zero or is 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;

	if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0 \n", n, lastDigit);
	else if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n", n, lastDigit);
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0 \n", n, lastDigit);
	}

return (0);
}
