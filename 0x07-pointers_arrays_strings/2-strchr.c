#include "main.h"
/**
 *  _strchr- locate charactere in a string
 *  @s: string to search
 *  @c: character to search for
 *  Return: the pointer to the location of the char
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0, b;

	for (a = 0; s[a]; a++)
		;
	b = 0;
	for (b = 0; b < a; b++)
	{
		if (s[b] == c)
		{
			s += b;
			return (s);
		}
	}
return ('\0');
}
