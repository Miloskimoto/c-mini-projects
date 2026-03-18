#include <unistd.h>
#include "ft.h"

void ft_print_reverse_alphabet(void){
     char n;
    n='z';
    while (n >='a')
    {
        write(1,&n, 1);
        if(!(n=='a'))
        {
            write(1,", ",2);
        }
        n--; 
    } 
}
