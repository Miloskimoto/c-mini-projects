#include <unistd.h>
#include "ft.h"

void ft_print_comb(void){
    int n;
    n='a';

    while (n <= 'z')
    {
        char b = n + 1;
        while (b <= 'z')
        {
            write(1,&n, 1);
            write(1,&b, 1);
            if (!(n=='y' && b=='z'))
            {
                write(1,", ",2);
            }
            b++;
        }
        n++;
    }
}
