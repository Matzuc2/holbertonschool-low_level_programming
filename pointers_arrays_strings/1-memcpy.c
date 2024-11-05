#include "main.h"
/**
*_memcpy - copies n bytes from a string adress to another
*@dest: memory area to fill with the copy
*@src: memory to copy into dest
*@n: number of bytes we want to copy
*Return: return memory area of dest which is a copy of source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
