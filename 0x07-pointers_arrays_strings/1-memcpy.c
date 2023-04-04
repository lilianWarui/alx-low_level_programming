#include "main.h"

/**
 * _memcpy a function that copies memory area
 * @n is the number of bytes
 * @dest is the memory area
 * @src is the memory where it is copied
 * return ,returns copied memory in n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
