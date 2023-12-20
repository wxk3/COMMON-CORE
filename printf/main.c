#include "ft_printf.h"

int main()
{
    char    *ptr;

    ft_printf("%c\n", 'C');
    printf("%c\n", 'C');
    ft_printf("%s\n", "TESTE");
    printf("%s\n", "TESTE");
    ft_printf("%d\n", -123456789);
    printf("%d\n", -123456789);
    ft_printf("%i\n", -123456789);
    printf("%i\n", -123456789);
    ft_printf("%u\n", 123456789);
    printf("%u\n", 123456789);
    ft_printf("%p\n", ptr);
    printf("%p\n", ptr);
    ft_printf("%x\n", 420);
    printf("%x\n", 420);
}