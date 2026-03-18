#include "ft.h"

void fat_putchar(char c){
    write(1, &c, 1);
}