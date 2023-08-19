#include "main.h"
int _printf(const char *format, ...)
{
    int i = 0;
    va_list args;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            printf("(here) ");
            checker(format[++i], args);
        }
        else
        {
        write(1,&format[i],sizeof(char));
        
        }
        i++;
    }
    return 0;

}