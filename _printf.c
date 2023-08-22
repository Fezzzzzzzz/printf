#include "main.h"
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
	if (!format)
		b = (-1);
	while (format[i])
	{
		if (format[i] == '\\')
		{
			if (format[i + 1] == '\\')
			{
				write(1, "\\", 1);
				i += 2;
				b++;
				continue;
			}
		}
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			a += checker(format[++i], args);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			b++;
		}
		i++;
	}
	va_end(args);
	return (a + b);
}
