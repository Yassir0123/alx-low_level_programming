#include "function_pointers.h"
/**
* array_iterator - info
* @array: info
* @size: info
* @action: info
* Return: return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action == NULL || array == NULL)
{
return;
}
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
