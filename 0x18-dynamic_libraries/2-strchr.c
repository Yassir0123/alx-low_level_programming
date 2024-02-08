#include "main.h"
#include <stdio.h>

/**
 * *_strchr - ter in a string
 * @s: string arch
 * @c: char tond
 *
 * Return: a pointer to the first occurrence of the character
 * c in the st NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
