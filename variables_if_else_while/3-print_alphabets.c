#include <stdio.h>
/* more headers goes there */
/**
*	main - Prints "Programming is like building a multilingual
 *	puzzle, followed by a new line.
	* Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	char a;
	char z = 'z';
	char A;
	char Z;

	for (a = 'a'; a < 'z'; a++)
		putchar(a);

	for (A = 'A'; A <= 'Z' ; A++)
		putchar(A);
putchar('\n');
return (0);
}

