#include "main.h"
#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)
/**
*_atoi - f*ck you atoi
*@s: char s
*Return: return only first integers in strings
*/
#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int puiss = 1;
    int i = 0;
    int found_digit = 0;

    while (s[i] != '\0')
    {
	if (result > 214748364 || (result == 214748364 && *s > '7'))
	{
		return ((puiss == 1) ? 2147483647 : -2147483648);
	}
	if (result < -214748364 || (result == -214748364 && *s > '7'))
        {
                return ((puiss == 1) ? 2147483647 : -2147483648);
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            found_digit = 1;
        }
        else if (found_digit)
        {
            break;
        }
        else if (s[i] == '-' && !found_digit)
        {
            puiss *= -1;
        }
        i++;
    }

    return (result * puiss);
}
