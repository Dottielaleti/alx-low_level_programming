#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @*s: string to be printed
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	while (*s <= 0; *s++)
	{
		_putchar (*s);
	}
	_putchar ('\n');
}
