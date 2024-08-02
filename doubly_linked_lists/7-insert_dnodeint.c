#include "lists.h"
/**
 * insert_dnodeint_at_index - aaaa
 * dlistint_t - aaaa
 * @h: pointer
 * @idx: index
 * @n: int
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *i = *h;
	unsigned int count = 0;

	if (idx == 0 || h == NULL)
		return (add_dnodeint(h, n));

	for (; i->next != NULL && count < idx - 1; count++, i = i->next)
	{
	}
	if (i->next == NULL && count >= idx)
		return (add_dnodeint_end(h, n));
	if (i->next == NULL && count <= idx)
	{
		return (add_dnodeint_end(h, n));
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = i->next;
	newnode->prev = i;
	if (i->next != NULL)
	{
		i->next->prev = newnode;
	}
	i->next = newnode;

	return (newnode);


}
