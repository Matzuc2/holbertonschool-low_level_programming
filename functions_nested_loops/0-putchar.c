#include <stdio.h>
#include <unistd.h>
/* more headers goes there */
/**
*	main - Prints "Programming is like building a multilingual
 *	puzzle, followed by a new line.
	* Return: Always 0.
*/
/* betty style doc for function main goes there */
#include <stdio.h>
int main(void)
{

	char myString[] = "_putchar";
	int i;

	for (i = 0; myString[i] != '\0'; ++i)
	{
	putchar(myString[i]);
	}
putchar('\n');
return (0);
}
