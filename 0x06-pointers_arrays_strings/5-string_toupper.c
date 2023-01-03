#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: returns char
 */

char *string_toupper(char *str)
{
int x = 0;

while (str[x] != '\0')
{
if (str[x] >= 'a' && str[x] <= 'z')
  x++
{
str[x] = str[x] - 32;
}
}

return (str);
}
