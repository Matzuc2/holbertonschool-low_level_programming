#include "main.h"
#include <unistd.h>
/**
*_strcpy - copy any string in return
*@dest : dest is the copy of the string in return
*@src : src is the string itself that dest has to copy
*Return: returns the copy of the string by the pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
dest[i] = '\0';
return (dest);
}

