#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/*
 * is_positive_or_negative - checks if a number is positive or negative
 * @n: the number to check
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        if (n == 0){
		printf("%d is zero\n", n);
	} else if (n < 0) {
		printf("%d is negative\n", n);
	} else {
		printf("%d is positive\n", n);
	}

	return (0);
}
