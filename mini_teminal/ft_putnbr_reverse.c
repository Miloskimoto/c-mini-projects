#include <unistd.h>
#include "ft.h"

void ft_print_number_reverse(int n){
    if(n==0){
        write(1,"0",1);
    }

    while(n>0){
        char c = (n%10) +'0';
        write(1,&c,1);
        n = n/10;
    }
}