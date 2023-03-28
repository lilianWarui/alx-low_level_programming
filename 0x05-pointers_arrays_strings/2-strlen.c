#include "main.h"
/**
 * function that returns the length of a string
 */
int _strlen(char *s)
{
	/**
	 * var ti check length
	 */
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
