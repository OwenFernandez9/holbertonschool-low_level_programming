#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - libera la lista
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *liberador;

	liberador = head;
	while (liberador != NULL)
	{
		free(liberador);
		liberador = liberador->next;
	}
}
