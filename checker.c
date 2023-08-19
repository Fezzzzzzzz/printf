#include "main.h"
int checker(char a,  va_list args)
{
    int i;
    format f[] = {
        {'d', print_int},
        {'c', print_char},
        {'s', print_string},
        {'f', print_float},
        {'\0', NULL}
    };
     void (*function)(va_list args);
    printf("[%c] (here too) ", a);
    for (i = 0; i < 5; i++)
    {    
        if (a == f[i].a)
        {
             printf(" <here too> ");
            function = f[i].fun;
            function (args);
        }
    }
return 0;
}
