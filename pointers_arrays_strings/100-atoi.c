#include "main.h"

#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    int found_digit = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            // Vérifier le dépassement avant d'ajouter le chiffre
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
            {
                // Gérer le cas spécial de INT_MIN
                if (sign == -1 && result == INT_MAX / 10 && (s[i] - '0') == (INT_MAX % 10) + 1)
                    return INT_MIN;
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            result = result * 10 + (s[i] - '0');
            found_digit = 1;
        }
        else if (found_digit)
        {
            break;
        }
        else if (s[i] == '-' && !found_digit)
        {
            sign = -1;
        }
        i++;
    }

    return result * sign;
}
