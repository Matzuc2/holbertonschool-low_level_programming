#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - function main returning 0
*@argc: variable to get the number of parameters
*@argv: variable to access the array of parameters
*Return: return zero
*/
int main(int argc, char **argv)
{
int x;
int y;
int calc;
int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') &&
	*argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	o = get_op_func(argv[2]);
	if ((o == NULL) || (*argv[2] != '+' && *argv[2] != '-' &&
	*argv[2] != '/' && *argv[2] != '*' && *argv[2] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	calc = o(x, y);
	printf("%d\n", calc);
	return (0);
}
