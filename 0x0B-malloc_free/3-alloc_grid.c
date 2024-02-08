#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* **alloc_grid - give data
* @width:  str
* @height: s2
* Return: return
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
int **g;
if (width <= 0 || height <= 0)
{
return (NULL);
}
g = (int **)malloc(height * sizeof(int *));
if (g == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
g[i] = (int *)malloc(width * sizeof(int));
if (g[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(g[j]);
}
free(g);
return (NULL);
}
for (j = 0; j < width; j++)
{
g[i][j] = 0;
}
}
return (g);
}
