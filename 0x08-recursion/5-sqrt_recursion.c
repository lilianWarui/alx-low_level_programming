#include "main.h"
/**
 * @param n :  int to calculate root of
 * @return: returns root of n
 */
int _sqrt_recursion(int n)
{
	int i = _sqrt_recursion(n / 2);

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (i * i >= n)
	{
		return (i);
	}
	else
	{
		return _sqrt_recursion(((n + 1) / 2) * 2 - 1);
        }
}
