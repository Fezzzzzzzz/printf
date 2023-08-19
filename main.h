#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
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
	void (*fun)(va_list args);
	} format;
int _printf(const char *format, ...);
int checker(char a, va_list args);
void print_int(va_list args);
void print_char(va_list args);
void print_string(va_list args);
void print_float(va_list args);
#endif
