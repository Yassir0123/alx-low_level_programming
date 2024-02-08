#include "main.h"

/**
 * *_memcpy - memory area
 * @dest: destemory area
 * @src: memor copy from
 * @n: number to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
