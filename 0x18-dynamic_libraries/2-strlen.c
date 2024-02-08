#include "main.h"

/**
 * _strlen - re length of a string
 * @s: string taluate
 *
 * Return: the he string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
