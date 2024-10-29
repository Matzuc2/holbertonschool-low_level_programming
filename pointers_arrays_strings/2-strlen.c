#include "main.h"
#include <unistd.h>
/**
* _strlen - return number of character in a string
*@s : char s
* Return: return Numlen
* _putchar - putechar
*/
int _strlen(char *s)
{
	int NumLen = 0;

	while (*s != '\0')
	{
		NumLen++;
		*s++;
	}
return (NumLen);

}
