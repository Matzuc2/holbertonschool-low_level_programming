#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{
        c = 'a';

        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
