#include "main.h"

/**
* largest_num - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_num(int a, int b, int c)
{
	int biggest;

	if (b > a && b > c)
{
	biggest = b;
}
	else if (a > b && a > c)
{
	biggest =  a;
}
	else
{
	biggest = c;
}
	return (biggest);
}
