#include "ft.h"

void fat_putnbr(int nb){
    if(nb == -2147483648){
        write(1, "-2147483648", 11);
        return;
    }
    if( nb < 0){
        write(1,"-",1);
        nb=-(nb);
    }

    if(nb<=9){
        char c;
        c= nb + '0';
        write(1,&c, 1);
    }else{
       fat_putnbr(nb/10);
       char c1;
       c1 =nb%10 +'0';
       write(1, &c1, 1);
    }
}