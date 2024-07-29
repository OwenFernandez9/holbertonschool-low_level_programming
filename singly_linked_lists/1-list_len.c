#include "lists.h"
#include <stdio.h>
#include <stddef.h>
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
