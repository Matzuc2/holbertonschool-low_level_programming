#include <stdio.h>
#include <unistd.h>
/**
 * times_table - print the sign + or - depending of the number
 */

void print_times_table(int n);
int main(void)
{
    print_times_table(3);
    printf("\n");
    print_times_table(5);
    printf("\n");
    print_times_table(98);
    printf("\n");
    print_times_table(12);  
    return (0);
}

void print_times_table(int n)
{

    int a, b, c;
    for (a = 0; a < 4; a++)
	{
		for (b = 0; b < 4; b++)
		{
			c = a * b;
			printf("%d, ", c);
		}
		printf("\n");
	}

    for (a = 0; a < 6; a++)
	{
		for (b = 0; b < 6; b++)
		{
			c = a * b;
			printf("%d, ", c);
		}
		printf("\n");
	}

	for (a = 0; a < 13; a++)
	{
		for (b = 0; b < 13; b++)
		{
			c = a * b;
			printf("%d, ", c);
		}
		printf("\n");
	}
}