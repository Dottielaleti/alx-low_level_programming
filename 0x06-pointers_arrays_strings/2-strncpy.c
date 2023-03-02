#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination of a string
 * @src: source of a string
 * @n: length of a string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}	
