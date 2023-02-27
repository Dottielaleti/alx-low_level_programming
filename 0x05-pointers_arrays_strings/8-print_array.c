#include "main.h"
/**
 * print_array - prints nelements of an array of integers
 * @a: int to check
 * @n: int to check
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
		if (y != n - 1)
			printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
	printf('\n');					
}
