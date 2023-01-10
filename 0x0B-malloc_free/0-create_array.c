#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char ch)
{
	char *x;
	unsigned int i;
	
  x = malloc(sizeof(ch) * size);
	
	if (size == 0 || x == NULL)
		return (NULL);
  
	for (i = 0; i < size; i++)
		x[i] = ch;

	return (x);
}
