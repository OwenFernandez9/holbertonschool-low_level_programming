#include "lists.h"
/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *backup = *h;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return(NULL);
	}
	while (*h != NULL && count < idx)
	{
		(*h) = (*h)->next;
		count++;
	}
	newnode->next = (*h)->next;
	newnode->prev = (*h);
	if ((*h)->next != NULL && (*h)->prev != NULL)
	{
		(*h)->next->prev = newnode;
	}
	else if ((*h)->next != NULL && (*h)->prev == NULL)
	{
		return (add_dnodeint(&backup, n));
	}
	else
	{
		return (add_dnodeint_end(&backup, n));
	}
	(*h)->next = newnode;
	newnode->n = n;
	*h = backup;

	return(newnode);
}
