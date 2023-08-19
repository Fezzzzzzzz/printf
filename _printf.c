#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			checker(format[++i], args);
		}
		else
		{
			write(1, &format[i], sizeof(char));
		}
		i++;
	}
	return (0);
}
