#include "ft.h"


int main(void){
    fat_putstr("Hello, world!\n");
    
    fat_putnbr(fat_strlen("Hello"));
    fat_putstr("Tamanho: ");
    
    fat_putchar('\n');

    fat_putnbr(3);
    fat_putchar('\n');
    return(0);
}
