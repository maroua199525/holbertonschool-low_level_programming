#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free an array
 *@grid:integer
 *@height:integer
 *Return: 
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free (grid[i]);
	free (grid);
}
	
