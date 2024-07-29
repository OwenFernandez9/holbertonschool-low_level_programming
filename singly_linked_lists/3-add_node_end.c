#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - agrego nodo al final
 * @head: head
 * @str: string
 * Return: retorno newnodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int r;
	list_t *newnodo;
	list_t *end = *head;

	for (r = 0; str[r] != '\0'; r++)
	{
	}
	newnodo = malloc(sizeof(list_t));
		if (newnodo == NULL)
		{
			return (NULL);
		}

	newnodo->str = strdup(str);
	newnodo->len = r;
	newnodo->next = NULL;
	if (*head == NULL)
	{
		*head = newnodo;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}

		end->next = newnodo;
	}
	return (newnodo);
}
