#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	new = *head;
	*head = new->next;
	n = new->n;
	free(new);
	return (n);
}
