#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongType;
	float floatType;


	printf("Size of a char :%s byte(s)\n", charType);
	printf("Size of an int :%d byte(s)\n", intType);
	printf("Size of a long int :%d byte(s)\n" longIntType);
	printf("Size of a long long int :%d byte(s)\n" longLongType);
	printf("Size of a float :%d byte(s)\n", floatType);

	return (0);
}
