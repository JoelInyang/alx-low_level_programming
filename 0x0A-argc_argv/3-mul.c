#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: no of array
 * @argv: array
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int first, second, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	product = first * second;
	printf("%d\n", product);
	return (0);
}
