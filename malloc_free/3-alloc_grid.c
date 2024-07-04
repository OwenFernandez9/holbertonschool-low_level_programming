#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - aaa
 *
 * @width: fila
 * @height: columna
 * Return: retorno
 */
int **alloc_grid(int width, int height)
{

	int **bid;
	int r;
	int l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	bid = malloc(width * sizeof(int));
	if (bid == NULL)
		return (NULL);

	for (r = 0; r < width; r++)
	{
		bid[r] = malloc(height * sizeof(int));
		if (bid[r] == NULL)
		{
			for (l = 0; l < r; l++)
			{
				free(bid[l]);
			}
			free(bid);
			return (NULL);
		}
		for (l = 0; l < height; l++)
		{
			bid[r][l] = 0;
		}
	}
	return (bid);
}
