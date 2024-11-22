#include "main.h"


int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return;
	}
	len++;
	_strlen_recursion(s + 1);
	return (len);
}
