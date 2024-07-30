#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - printear lista doblemente enlazada
 *
 * dlistint_t - aaa
 * @h: puntero a header
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
