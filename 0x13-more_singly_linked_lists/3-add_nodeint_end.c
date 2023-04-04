#include "main.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of double pointer
 * @n: data added
 *
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *ptr, *temp;

	ptr = head;
	temp = (listint_t*)malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr-> next;
	}
	ptr-> next = temp;
	return (temp);
}
