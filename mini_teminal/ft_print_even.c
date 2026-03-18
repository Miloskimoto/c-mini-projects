#include <unistd.h>
#include "ft.h"

void ft_print_even_numbers(void){
    int c;
    c=0;
    while (c<=8)
    {
        char c1 = c +'0';
        write(1,&c1, 1);
        if (c != 8)
        {
        write(1,", ",1);
        }
    c+=2;
    } 
}
