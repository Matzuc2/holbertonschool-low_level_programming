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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
