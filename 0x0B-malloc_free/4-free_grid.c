#include "main.h"
#include "stdlib.h"
/**
 * free_grid - functions that returns a pointer to a 2 dimensional
 * @grid: array to free
 * @height: height of the array
 * Return: Pointer
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(*(grid + k));
	}
	free(grid);
}
