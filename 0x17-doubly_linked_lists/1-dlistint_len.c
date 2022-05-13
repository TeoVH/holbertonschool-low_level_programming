#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer
 * Return: numbers of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
