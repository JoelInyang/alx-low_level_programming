#include "main.h"
#include <stdio.h>

/**
 * _strspn - get length of a prefix substring
 * @s: the string to search
 * @accept: the characters to allow in the substring
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes fron accept.
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
