#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int i = 0;    //variale declaration

while (i < n && src[i] != '\0')   //entry point loop control
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);

}
