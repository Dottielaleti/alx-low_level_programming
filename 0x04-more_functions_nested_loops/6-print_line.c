#include "main.h"
 /**
  * print_line - function that draws a straight line in the terminal
  * @n: number of times
  *
  * Return: void
  */
void print_line(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < slash; ++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
