#include "main.h"
#include <stdlib.h>
/**
 * free_grid - It free memory
 * @grid: to be free
 * @height: the colum
 * Return: Always 0
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
