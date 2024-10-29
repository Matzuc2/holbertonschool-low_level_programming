#include "main.h"
#include <stdio.h>
/**
*rev_string - print the string
*@s : char str
*/
void rev_string(char *s)
{
	int len = 0;
	int enl = 0;
	int i;
	int temp;


	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (i = 0; i < len; i++)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		len--;
	}
}
