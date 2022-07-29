#include  <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: size of array
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num = 0, a, b, c, d;

	a = 1;
	while (a < argc)
	{
	b = 0;
	while (argv[a][b] != '\0')
	{
	if (argv[a][b] > '9' || argv[a][b] < '0')
	{
	printf("Error\n");
	return (1);
	}
	b++;
	}
	a++;
	}
	c = 1;
	while (c < argc)
	{
	d = atoi(argv[c]);
	num += d;
	c++;
	}
	printf("%d\n", num);
	return (0);
}
