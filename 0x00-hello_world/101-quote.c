#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: 1
 */
int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora, 2015-10-19\n";

	write(var, sizeof(var) - 1);

	return (1);
}
