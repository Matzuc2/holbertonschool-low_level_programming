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
	int x;
	int y;
	int calc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	calc = x * y;
	printf("%d\n", calc);
	return (0);
}

