#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
