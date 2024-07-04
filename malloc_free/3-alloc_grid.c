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
	int r = 0;
	int l = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	bid = malloc(height * sizeof(int *));
	if (bid == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		bid[r] = malloc(width * sizeof(int));
		if (bid[r] == NULL)
		{
			for (l = 0; l < r; l++)
			{
				free(bid[l]);
			}
			free(bid);
			return (NULL);
		}
		for (l = 0; l < width; l++)
		{
			bid[r][l] = 0;
		}
	}
	return (bid);
}
