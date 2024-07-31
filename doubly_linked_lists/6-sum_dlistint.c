#include "lists.h"
/**
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head->n != 0)
		{
			sum += (head->n);
		}
		head = head->next;
	}
	return (sum);
}
