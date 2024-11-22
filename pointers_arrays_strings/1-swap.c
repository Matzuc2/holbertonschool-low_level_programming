#include "main.h"
/**
* swap_int - intervert the values of two variables in program by pointer
*@a : pointer to int a
*@b : pointer to int b
*/
void swap_int(int *a, int *b)
{
	int temporaire = *a;
	*a = *b;
	*b = temporaire;
}
