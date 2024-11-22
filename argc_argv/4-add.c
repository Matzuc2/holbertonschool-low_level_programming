/**
*main - multiplie first 2 arguments after calling prog
*@argc: numbers of arguments including prog name
*@argv: array of arguments including prog name
*Return: return 0;
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int calc = 0;
	int i;
	int j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i != argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	calc += atoi(argv[i]);
	}
	printf("%d\n", calc);
	return (0);
}
