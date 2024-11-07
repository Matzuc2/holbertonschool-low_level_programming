/**
*main - multiplie first 2 arguments after calling prog
*@argc: numbers of arguments including prog name
*@argv: array of arguments including prog name
*Return: return 0;
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int y = atoi(argv[2]);
	int x = atoi(argv[1]);
	int calc = x * y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", calc);
	return (0);
}

