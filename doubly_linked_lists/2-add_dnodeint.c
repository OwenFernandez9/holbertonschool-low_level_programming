#include "lists.h"
/**
 * add_dnodeint - add node
 * dlistint_t - 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return(newnode);
}
