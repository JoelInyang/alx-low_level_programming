#include <stdlib.h>

#include "main.h"

/**
 * str_concat - string to be concatenated
 * @s1: first string
 * @s2: second string
 * Return: concated string
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *e;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	c = a + b;
	e = malloc(c * sizeof(char) + 1);
	if (e == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (d < c)
	{
		if (d < a)
			e[d] = s1[d];
		if (d >= a)
		{
			e[d] = s2[b];
			b++;
		}
		d++;
	}
	e[d] = '\0';
	return (e);
}
