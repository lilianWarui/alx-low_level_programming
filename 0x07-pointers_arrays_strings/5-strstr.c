#include "main.h"
/**
 * _strstr : is the Entry point
 * @haystack: input
 * @needle: input
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *t = needle;

		while (*x == *t && *t != '\0')
		{
			x++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (0);
}


