#include "lists.h"

/**
 * dlistint_len - print the length of data in a double linked list
 * @h: the head pointer to the list
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length;

	if (h == NULL)
		return (0);
	for (length = 0; h != NULL; length++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (length);
}
