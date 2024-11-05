#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			return (haystack + i);
		}
		else if (haystack[i] == '\0')
		{
			return (NULL);
		}
	}
	return (haystack);
}
