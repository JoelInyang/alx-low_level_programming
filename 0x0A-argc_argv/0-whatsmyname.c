#include <stdio.h>

/**
 * main - printf program name
 * @argc: no of arguments
 * @argv: array of string parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
