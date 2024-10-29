#include "main.h"
#include <unistd.h>

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		_putchar(src[i]);
		dest += src[i];
	}
return (dest);
}
