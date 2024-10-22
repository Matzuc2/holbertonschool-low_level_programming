#include <stdio.h>
#include "main.h"
#include <ctype.h>

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

