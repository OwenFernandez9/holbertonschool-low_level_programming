#include "lists.h"
/**
 * free_dlistint - aaa
 * dlistint_t - aaa
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
