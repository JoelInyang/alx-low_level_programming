#include <stdio.h>

#include "main.h"

/**
 * main - entry point
 * @argc: the size of array
 * @argv: the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
	printf("%s\n", argv[a]);
			a++;
	}
	return (0);
}
