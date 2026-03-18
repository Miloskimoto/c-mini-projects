#include "ft.h"

void fat_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        fat_putchar(str[i]);
        i++;
    }
}