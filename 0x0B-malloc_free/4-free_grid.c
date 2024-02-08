#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* free_grid - give data
* @grid: data
* @height: s2
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height < 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
