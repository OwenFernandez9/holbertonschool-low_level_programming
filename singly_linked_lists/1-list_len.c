#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - list-len
 * list_t - list_t
 * @h: puntero de header
 * Return: retorno count
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
