#include <stdio.h>
#include "main.h"
/**
*main - print the program name
*Return: return 0
*@argc: return the number of char in appelation of program
*@argv: return the name of argv[i]
*/
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
