#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
int num = 0, i;
int lower_case[] = {97, 101, 111, 116, 108};
int upper_case[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};


while (*(s + num) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(s + num) == lower_case[i] || *(s + num) == upper_case[i])
{
*(s + num) = numbers[i];
break;
}
}
num++;
}

return (s);
}
