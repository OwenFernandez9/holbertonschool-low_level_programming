#include "lists.h"
/**
 * get_dnodeint_at_index - aaa
 * dlistint_t - aaaa
 * @head: head
 * @index: index
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int v;

	while (head != NULL)
	{
		if (v == index)
		{
			return (head);
		}
		head = head->next;
		v++;
	}
	return (head);
}
