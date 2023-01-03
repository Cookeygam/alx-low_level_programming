#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
unsigned int m, num, count;

if (n < 0)
{
_putchar(45);
m = n * -1;
}
else
{
m = n;
}

num = m;
count = 1;

while (num > 9)
{
num = num / 10;
count = count * 10;
}

for (; count >= 1; count /= 10)
{
_putchar(((m / count) % 10) + 48);
}
}
