#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int u;

	u = 0;
	if (!b)
		return (0);
	for (q = 0; b[q] != '\0' q++)
	{
		if (b[q] != '0' && b[q] != '1')
			return (0);
	}
	for (q = 0; b[q] != '\0'; q++)
	{
		u <<= 1;
		if (b[q] == '1')
			u += 1;
	}
	return (u);
}
