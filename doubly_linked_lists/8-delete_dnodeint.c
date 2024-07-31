#include "lists.h"
/**
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;

	while (*head != NULL && count != index -1)
	{
		*head = (*head)->next;
		count++;
	}
	if (*head != NULL)
	{
		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;

		free (*head);
		return(1);
	}
	else
		return(-1);

}
