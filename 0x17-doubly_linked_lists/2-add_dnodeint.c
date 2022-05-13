#include "lists.h"

/**
 * add_dnodeint - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	if (*head == NULL)
	{
		*head = new_n;
		new_n->next = NULL;
		new_n->prev = NULL;
		return (new_n);
	}

	new_n->next = *head;
	new_n->prev = NULL;
	(*head)->prev = new_n;
	*head = new_n;
	return (new_n);
}
