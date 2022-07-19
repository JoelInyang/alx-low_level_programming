#include "main.h"

/**
 * _memcpy - function
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: the size of memory
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
