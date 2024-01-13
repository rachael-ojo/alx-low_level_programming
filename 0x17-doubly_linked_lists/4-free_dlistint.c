#include "lists.h"

/**
 * free dlistint - function that frees a doubly linked list
 * @head: pointer to the first node of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
