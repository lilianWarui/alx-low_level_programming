#include "main.h"
/**
 * int factorial(int n)- prints the factorial ofgiven number
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
