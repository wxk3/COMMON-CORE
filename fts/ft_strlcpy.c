#include "libft.h"

void    ft_strlcpy(char *dest, char *src, unsigned int n)
{
    size_t i;
    size_t len;

    len = 0;
    i = 0;
    while (src[len] != '\0')
    {
        len++;
    }

    if (n > 0)
    {
        while (i < n - 1 && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
    }

    if (i < n)
    {
        dest[i] = '\0';
    }
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}
// int main(void)
// {
//     char src[] = "Hello world!";
//     char dest[20];

//     ft_strlcpy(dest, src, 10);

//     printf("%s\n", dest);
// }