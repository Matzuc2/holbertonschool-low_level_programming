#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_int - print integer from args list
*@args: va_list args
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
*print_float - print float from args list
*@args: va_list args
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
*print_char - print char from args list
*@args: va_list args
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
*print_string - print string from args list
*@args: va_list args
*/
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
*print_all - print va_list after format depending on char
*on string format
*@format: string used to know the type of argument in va_list
*/
void print_all(const char * const format, ...)
{
	va_list args;
	which_s which[] = {
	{"i", print_int},
	{"c", print_char},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};

	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i] != '\0')
	{
	j = 0;
		while (which[j].w != NULL)
		{
			if (format[i] == *(which[j].w))
			{
				printf("%s", separator);
				which[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
	i++;
	}
	printf("\n");
	va_end(args);
}



