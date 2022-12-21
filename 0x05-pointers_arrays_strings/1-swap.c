#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * @c: is an integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
