#include "main.h"
#include <stdlib.h>
/**
 * create_array - aaaa
 *
 *@size: longitud de la array
 *@c: c
 *Return: retorno
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
