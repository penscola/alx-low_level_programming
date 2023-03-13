#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array of integers
 *
 * @grid: Pointer to the 2D array of integers
 * @height: Height of the 2D array of integers
 *
 * Description: Frees the memory allocated to a 2D array of integers
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
