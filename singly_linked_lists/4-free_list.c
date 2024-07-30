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

	while (head != NULL)
	{
		liberador = head;
		head = head->next;
		free(liberador->str);
		free(liberador);
	}
}
