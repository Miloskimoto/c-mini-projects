#ifndef FT_H
#define FT_H
#include <unistd.h>

void fat_putchar(char c);
void fat_putnbr(int nb);
void fat_putstr(char *str);
int fat_strlen(char *str);

#endif