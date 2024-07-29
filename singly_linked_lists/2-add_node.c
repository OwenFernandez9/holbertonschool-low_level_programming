#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - aÃadir nodo
 * @head: head
 * @str: string
 * Return: retorno newnodo
 */
list_t *add_node(list_t **head, const char *str)
{
	int r;
	list_t *newnodo;

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
	newnodo->next = *head;
	*head = newnodo;

	return (newnodo);
}
