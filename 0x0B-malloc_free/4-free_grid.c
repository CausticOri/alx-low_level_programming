#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @heigth: heigth dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int heigth)
{
	int i;

	for (i = 0; i < heigth; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
