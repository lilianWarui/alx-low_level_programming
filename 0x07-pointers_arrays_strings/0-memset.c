#include "main.h"
/**
 * _memset() is a func that fills memory with a constant byte
 * b is final output of bytes
 * s is starting add. of memory
 * n is the number of bytes to be changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
