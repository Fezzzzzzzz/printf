#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - a format struct
 * @a: a character
 * @fun: function
 *
 */
typedef struct format
	{
	char a;
	int (*fun)(va_list args);
	} format;
int _printf(const char *format, ...);
int checker(char a, va_list args);
int print_int(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_float(va_list args);
#endif
