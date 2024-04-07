#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("printf : {je suis le test %x}\n", -10);
    ft_printf("ft_printf : {je suis le test %x}\n", -10);
    return 0;
}