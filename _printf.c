#include "main.h"
#include <stdlib.h>
/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, a = 0, b = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			a += checker(format[++i], args);
		}
		else
		{
			write(1, &format[i], 1);
			b++;
		}
		i++;
	}
	exit(a + b);
}
