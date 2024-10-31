#include "main.h"


char *_strcat(char *dest, char *src)

{
int i;
int j;

	for (i = 0; dest[i] != '\0'; i++)

	if (dest[i] == '\0')
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] += src[j];
		}
	}
dest[i] = '\0';
return (dest);
}
