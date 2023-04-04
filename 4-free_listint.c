#include "lists.h"
#include <stdlib.h>

/**
 * void free_listint - function that frees a listint_t list
 * @head: head list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next= head-> next;
		free(head);
		head = next;
	}
}
