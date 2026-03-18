#include <unistd.h>
#include "ft.h"

void ft_print_alphabet(void){
    char c='a';
    while (c<='z')
    {
        write(1,&c,1);
       if(!(c=='z'))
        {
            write(1,", ",2);
        }
        
        c++;
    }
}
