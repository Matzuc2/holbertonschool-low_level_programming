#include "main.h"
#include <unistd.h>
#include <stdio.h>

#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row;
	int col;
	int spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
			_putchar('\n');
		}
	}
