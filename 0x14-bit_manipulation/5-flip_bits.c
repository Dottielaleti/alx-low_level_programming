#include "main.h"

/**
 * flip_bits - flip to get from one number to the other
 * @n: 1st number
 * @m: 2nd number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, counter;
	unsigned int k, q;

	k = 0;
	counter = 1;
	diff = n ^ m;
	for (q = 0; q < (sizeof(unsigned long int) * 8); q++)
	{
		if (counter == (diff & counter))
			q++;
		counter <<= 1;
	}
	return (k);
}
