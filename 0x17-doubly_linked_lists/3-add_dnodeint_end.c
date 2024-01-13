#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: pointer pointing to the end of the list
 * @n: integer data to be created to the new list
 * Return: address of the element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	(void) temp;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next !=  NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
