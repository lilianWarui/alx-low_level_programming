#include "main.h"
/*
 * rhis functiom checls for a digit
 * 0 through 9
 * returms 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
