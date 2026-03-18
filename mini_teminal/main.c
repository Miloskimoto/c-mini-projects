#include <unistd.h>
#include "ft.h"

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr("=== ALPHABET ===\n");
    ft_print_alphabet();
    ft_putstr("\n\n");

    ft_putstr("=== REVERSE ===\n");
    ft_print_reverse_alphabet();
    ft_putstr("\n\n");

    ft_putstr("=== EVEN ===\n");
    ft_print_even_numbers();
    ft_putstr("\n\n");

    ft_putstr("=== ODD ===\n");
    ft_print_odd_numbers();
    ft_putstr("\n\n");

    ft_putstr("=== COMBINATIONS ===\n");
    ft_print_comb();
    ft_putstr("\n\n");

    ft_putstr("=== REVERSE NUMBER ===\n");
    ft_print_number_reverse(1234);
    ft_putstr("\n");

    return (0);
}