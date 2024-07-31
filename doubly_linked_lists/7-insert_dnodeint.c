#include "lists.h"
/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return(NULL);
	}
	while (*h != NULL && count != idx -1)
	{
		*h = (*h)->next;
		count++;
	}
	newnode->next = (*h)->next;
	newnode->prev = (*h);
	if ((*h)->next != NULL)
	{
		(*h)->next->prev = newnode;
	}
	(*h)->next = newnode;
	newnode->n = n;
	
	return(newnode);
}
