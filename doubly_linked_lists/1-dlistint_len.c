#include "lists.h"
/**
 * dlistint_len - return elements
 *
 * dlistint_t - aaa
 * @h: pointer
 * Return: elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		h = h->next;
		count++;
	}
	return (count);
}
