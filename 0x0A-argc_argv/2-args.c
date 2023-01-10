#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int num = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (num < argc)
{
printf("%s\n", argv[count]);
num++;
}
}
return (0);
}
