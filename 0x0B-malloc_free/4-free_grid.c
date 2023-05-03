#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: grid
 * @height: height
 * Description: frees memory
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
