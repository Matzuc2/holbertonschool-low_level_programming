#include "main.h"
/**
*_memset - fill the memory with a constant byte
*@s: pointer containing the adress of the memory
*@b: byte to fill the pointer with
*@n: numbers of bytes to be filled with
*Return: return the pointer containing the adress modified
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	s[i] = b;
return (s);
}
