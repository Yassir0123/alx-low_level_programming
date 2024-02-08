#include "main.h"

/**
 * *_memset - fills mant byte
 * @s: mem be filled
 * @b: chaopy
 * @n: number of time b
 *
 * Return: pointer toy area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
