#include <stdio.h>
/**
*        main - Prints "Programming is like building a multilingual
*                puzzle, followed by a new line.
	* Return: Always 0.
*/
int main(void)
{
	char charType;
	int  intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %zu byte\n",  sizeof(charType));
	printf("Size of an int: %zu byte\n", sizeof(intType));
	printf("Size of a long int : %zu byte\n", sizeof(longintType));
	printf("Size of a long long int : %zu byte\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte\n", sizeof(floatType));

	return (0);
}
