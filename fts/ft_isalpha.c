#include "libft.h"

int    ft_isalpha(int c)
{
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            return (1);
        }
        else
        {
        return (0);
        }
}
// int main(void)
// {
//     char c = '2';

//     printf("%d\n", ft_isalpha(c));
// }