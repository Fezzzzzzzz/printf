#include "main.h"
#include <stdio.h>
/**
 * checker - function that check the format
 * @a: the char to checked
 * @args: the argument
 * Return: 0
 */
int checker(char a, va_list args)
{
	int i;
	format f[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'\0', NULL}
	};
	int (*function)(va_list args);

	for (i = 0; i <= 3; i++)
	{
		if (a == f[i].a)
		{
			function = f[i].fun;
			return (function(args));
		}
		else if (a != f[i].a && i == 3)
		{
			return (f[2].fun(args) + write(1, &a, 1));
		}
	}
	return (0);
}
