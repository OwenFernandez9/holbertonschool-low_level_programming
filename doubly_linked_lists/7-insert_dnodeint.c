#include "lists.h"
/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *i = (*h);
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return(NULL);
	}
	while (i != NULL && count != idx)
	{
		i = i->next;
		count++;
	}
	newnode->next = i->next;
	newnode->prev = i;
	if (i->next != NULL)
	{
		i->next->prev = newnode;
	}
	i->next = newnode;
	newnode->n = n;
	
	return(newnode);
}
