#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
*print_chessboard - print the chessboard
*@a: pointer containing the fcking array
*/
void print_chessboard(char (*a)[8])
{
	int rows;
	int columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
	putchar('\n');
	}
}
