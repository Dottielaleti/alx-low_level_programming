#include "lists.h"

/**
 * get_nodeint_at_index - the nth of a listint_t linked list
 * @head: pointer of the first node
 * @index: index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q;

	if (head == NULL)
		return (NULL);
	for (q = 0; q < index; q++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
