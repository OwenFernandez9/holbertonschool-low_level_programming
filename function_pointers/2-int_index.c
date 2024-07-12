#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - index
 *
 * @array: array
 * @size: tamanho
 * @cmp: cmp
 * Return: retorno
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
		{
			return (r);
		}
	}
	return (-1);
}
