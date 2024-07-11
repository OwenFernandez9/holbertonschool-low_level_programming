#include "function_pointers.h"
/**
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int l;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
