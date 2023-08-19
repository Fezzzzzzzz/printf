#include "main.h"

void print_int(va_list args)
{
    
    int *i = (int*) va_arg(args, int);
    write(1,&i, sizeof(int *));
}

void print_char(va_list args)
{
  char i = va_arg(args, int);
  write(1, &i,sizeof(char));
}
void print_string(va_list args)
{
    int j = 0;
   char* i = va_arg(args, char*);
   while (i[j] != '\0')
    {
        write(1,&i[j] ,1);
        j++;
    }
}
void print_float(va_list args)
{
    float i = va_arg(args, double);
    write(1, &i,sizeof(float));
}

