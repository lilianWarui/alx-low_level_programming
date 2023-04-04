#include "main.h"
/**
 * _strpbrk -  function locates the first occurrence in the string s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			return (s);
		}
	s++;
	}
	return ('\0');
}

