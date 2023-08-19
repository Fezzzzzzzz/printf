#include "main.h"
/**
 * print_char - function prints a char
 * @args: the argument to print
 * Return: void
 */
void print_char(va_list args)
{
char i = va_arg(args, int);
write(1, &i, sizeof(char));
}
/**
 * print_string - function prints a string
 * @args: the argument to print
 * Return: void
 */
void print_string(va_list args)
{
	int j = 0;

	char *i = va_arg(args, char*);

	while (i[j] != '\0')
	{
		write(1, &i[j], 1);
		j++;
	}
}
