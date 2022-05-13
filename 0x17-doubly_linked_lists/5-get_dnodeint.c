#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head of doubly linked list
 * @index: position of the target node
 * Return: node at specified index, NULL if the node doesnt exists
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i != index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
