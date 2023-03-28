#include "main.h"
/*
 * function that swaps values of 2 integere
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;

	*b = p;
}
