#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
*print_chessboard - print the chessboard
*@a: pointer containing the fcking array
*/
void print_chessboard(char (*a)[8])
/* RAPPEL, ici le pointeur pointera toujours sur a[0] si on l*/
/*l'indexe, malheureusement ce format-là la 2D array ne permet pas d'indexer*/
/*(ou du moins pas comme je le souhaite).*/
/*on définit des variables simples qui nous serviront à la place*/
/*comme rows ou columns. Puis on affiche quand on a les bonnes valeurs.*/
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
