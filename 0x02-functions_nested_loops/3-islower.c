#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 *
 * Return: 1 if c is a lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
