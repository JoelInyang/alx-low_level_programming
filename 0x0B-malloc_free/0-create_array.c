#include <stdlib.h>

#include "main.h"

/**
 * create_array - array to be created
 * @size: size of array
 * @c: character to initialize array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		b[a] = c
		a++;
	}
	return (b);
}
