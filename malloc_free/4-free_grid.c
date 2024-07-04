#include "main.h"
#include <stdlib.h>
/**
 * free_grid - liberador de espacio
 *
 * @grid: array de arrays
 * @height: aaaaa
 */
void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}
	free(grid);
}
