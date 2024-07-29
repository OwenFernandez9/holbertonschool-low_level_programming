#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - printear lista
 *
 * list_t - lista
 * @h: puntero a header
 * Return: cantidad de nodos
 */
size_t print_list(const list_t *h)
{
	int count;

	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("[%i]%s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)");
		count++;
		h = h->next;
	}
	return (count);
}
