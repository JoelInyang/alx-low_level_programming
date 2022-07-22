#include "main.h"

/**
 * _strspn - string of pointers
 * @char *s: for pointer s
 * @s: the string to search
 * @char *accept: for pointer accept
 * @accept: the characters to allow in the substring
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
for (int i = 0; s[i] != 0; i++)
{
for (int j = 0; accept[j] != 0; j++)
{
if (s[i] == accept[j])
{
a++;
break;
}
}
}
return (a);
}
