#include "main.h"
#include <stdio>

/**
 * print_array - prints nelements of an array of integers
 * @a: int to check
 * @n: int to check
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
				if (i != n - 1)
				printf(", ");
	}
	printf("\n");
}
