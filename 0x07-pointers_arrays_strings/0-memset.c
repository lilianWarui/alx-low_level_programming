
#include "main.h"
/**
 * _memset() fills memory with a constant byte
 *s  is is the starting address of memory to be filled
 * bis the desired value
 * n is the mumber of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		i++;
		s[i] = b;
		n--;
	}
	return (s);
}

