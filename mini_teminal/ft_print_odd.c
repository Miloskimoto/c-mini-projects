#include <unistd.h>
#include "ft.h"

void ft_print_odd_numbers(void){
     int n=0;
    while (n<=99){
        if(n%2!=0){
            char n1=(n/10 + '0');
            char n2=(n%10 + '0');

            write(1,&n1,1);
            write(1,&n2,1);

            if (n<99){
            write(1,", ",1);}
        }
    n++;
    }
}