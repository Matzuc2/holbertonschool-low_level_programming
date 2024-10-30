#include "main.h"
#include <limits.h>

#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int puiss = 1;
    int i = 0;
    int found_digit = 0;

    while (s[i] != '\0')
    {
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
