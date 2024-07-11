#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - array
 * @array: array
 * @size: tamanho
 * @action: accin
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
