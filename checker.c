#include "main.h"
/**
 * checker - function that check the format
 * @a: the char to e checked
 * @args: the argument
 * Return: 0
 */
int checker(char a, va_list args)
{
	int i;
	format f[] = {
	{'c', print_char},
	{'s', print_string},
	{'\0', NULL}
	};
	void (*function)(va_list args);

	for (i = 0; i < 5; i++)
	{
		if (a == f[i].a)
		{
			function = f[i].fun;
			function(args);
		}
	}
	return (0);
}
