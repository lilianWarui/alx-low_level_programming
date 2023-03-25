#include "main.h"
/**
 * the function checks for uppercase letters
 * and returns 1 if true and 0 when false
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
