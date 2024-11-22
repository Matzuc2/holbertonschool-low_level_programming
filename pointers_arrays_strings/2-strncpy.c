#include "main.h"
#include <stdio.h>
/**
*_strncpy - copies the value of a string variable into another string variable
*@dest: return value, the two strings concatenated
*@src: first string passed by parameter to collide with dest
*@n: number of characters we want from dest.
*Return: return dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}

