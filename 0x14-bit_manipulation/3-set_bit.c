#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: pointer number of q
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	q = 1 << index;
	*n = *n | q;

	return (1);
}
