#include "main.h"
#include <stdio.h>
/**
*_strncat - collides two strings together
*@dest: return value, the two strings concatenated
*@src: first string passed by parameter to collide with dest
*@n: number of characters we want from dest.
*Return: return dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j;

	for (i = 0 ; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
dest[i] = '\0';
return (dest);
}
