#include "main.h"
/**
 *  _strlen - returns length of a string
 *  @s: character
 *
 *  Return: length of a string
 */
int _strlen(char *s)
{
	char *s;
	int len;

	*s = "My first strlen!";
	len = _strlen(*s);
	printf("%d\n", len);
	return (len);
}
