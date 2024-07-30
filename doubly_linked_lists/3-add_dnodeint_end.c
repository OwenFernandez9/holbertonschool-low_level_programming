#include "lists.h"
/**
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *p = NULL;
	
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	
	if (head != NULL && *head != NULL)
	{
		for(p = *head; p->next != NULL; p = p->next)
		{}
	}

	newnode->n = n;
	newnode->next = NULL;
	if (p == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->prev = p;
		p->next  = newnode;
	}
	return(newnode);
}
