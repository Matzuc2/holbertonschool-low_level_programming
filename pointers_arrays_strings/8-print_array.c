#include <stdio.h>
/**
*print_array - print array of int taking the parameter n
*@a: int a, pointer pointing for the address of the array in the main function
*@n: int n parameter for which int we want to print in the original array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
