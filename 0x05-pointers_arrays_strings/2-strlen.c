#include "main.h"
/**
 *  _strlen - returns length of a string
 *  @s: character
 *
 *  Return: length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	for (*s++)
		a++;
	return (a);
}
