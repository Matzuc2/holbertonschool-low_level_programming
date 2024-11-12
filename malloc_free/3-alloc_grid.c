#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
*alloc_grid - loue l'espace pour une array en 2D
*@width: définit la largeur de l'array 2D
*@height: définit la hauteur de l'array 2D
*Return: retourne le pointeur du 2d array
*/


int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	p[i] = malloc(width * sizeof(int));
	if (p[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(p[j]);
		}
		free(p);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		p[i][j] = 0;
	}
}
	return (p);
}
