#include "main.h"
#define NULL ( (void *) 0)

char *_strchr(char *s, char c)
{
	int i;x
	/*int j = 0;*/

	for (i = 0; s[i] != c ; i++)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
	}

	return (s + i);
}
