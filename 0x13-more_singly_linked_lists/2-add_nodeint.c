#include "lists.h"
#include <stdlih.h>

/**
 * add_nodeint - adds a new node at beginning of listint_t list
 * @head: head of double pointer
 * @n: integer
 *
 * Return: adress of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (head);
}
