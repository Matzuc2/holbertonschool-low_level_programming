/**
*main - return all the arguments after calling prog
*@argc: numbers of arguments including prog name
*@argv: array of arguments including prog name
*Return: return 0;
*/

#include "main.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
