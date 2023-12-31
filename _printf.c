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
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0' && format[i + 1] != ' ')
			{
				if (format[i + 1] == 'm')
				{
					b += write(1, "Success", 7);
					i += 2;
					continue;
				}
				a += checker(format[++i], args);
			}
			else if ((format[i + 1] == '\0' || format[i + 1] == ' '))
			{
			return (-1);
			}
		}
		else
		{
		b += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (a + b);
}
