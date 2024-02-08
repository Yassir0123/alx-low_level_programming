#include <stdlib.h>
#include "main.h"
/**
 * *array_range - info
 * @min: data
 * @max: data
 * Return: return
 */
int *array_range(int min, int max)
{
int *u;
int i, r;
if (min > max)
return (NULL);
r = max - min + 1;
u = malloc(sizeof(int) * r);
if (u == NULL)
return (NULL);
for (i = 0; min <= max; i++)
u[i] = min++;
return (u);
}
