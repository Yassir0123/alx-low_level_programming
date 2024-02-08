#include <stdio.h>
/**
* swap_int - swap values
* @a: pointer
* @b: pointer
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
