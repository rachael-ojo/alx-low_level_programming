#include "lists.h"

/**
 * dlistint_len - print the length of nodes in a double linked list
 * @h: the head pointer to the list
 * Return: The length of nodes in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
