#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int k)
{
	char *sout;
	unsigned int ls1, ls2, lsout, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++);
  
	for (ls2 = 0; s2[ls2] != '\0'; ls2++);
	if (k > ls2)
		k = ls2;

	lsout = ls1 + k;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (x = 0; x < lsout; i++)
		if (x < ls1)
			sout[x] = s1[x];
		else
			sout[x] = s2[x - ls1];

	sout[x] = '\0';
	return (sout);
}
