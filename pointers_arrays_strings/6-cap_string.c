#include "main.h"
/**
*cap_string - cap lowcase strings for first letter of a word
*@str: str char
*Return: return the string modified
*/
char *cap_string(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '\n')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '\t')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ',')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '.')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ';')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '!')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '?')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '"')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '(')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ')')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '{')
		str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '}')
		str[i] = str[i] - 32;
		if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] >= '0' && str[i - 1] <= '9')
		str[i] = str[i] - 32;
		else
		continue;
	}
	return (str);
}
