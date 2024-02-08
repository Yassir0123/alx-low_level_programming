#include "main.h"
/**
* reverse_array - give reverse
* @a: pointer
* @n: number of elements
*/
void reverse_array(int *a, int n)
{
int i;
int v;
int c;
c = n - 1;
for (i = 0; i < n / 2; i++)
{
v = a[i];
a[i] = a[c];
a[c] = v;
c--;
}
}
