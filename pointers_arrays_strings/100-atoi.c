#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
  int result = 0;
  int puiss = 1;
  int i = 0;
while (s[i] == ' ')
	i++;
while (s[i] == '+' || s[i] == '-')
{
      	if (s[i] == '-')
      	{
      		puiss *= -1;
		i++;
        }
	else
	{
	i++;
	}
}
while (s[i] >= '0' && s[i] <= '9')
{
        result = result * 10 + (s[i] - '0');
	i++;
	}
	return (result * puiss);
}


