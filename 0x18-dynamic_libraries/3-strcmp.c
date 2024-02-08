#include "main.h"

/**
 * _strcmp - compares ngs
 * @s1: first string tompare
 * @s2: second string mpare
 *
 * Return: less than 0re equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
