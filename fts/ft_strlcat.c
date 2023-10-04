#include <libft.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t dest_size;
    size_t src_size;

    i = 0;
    dest_size = ft_strlen(dst);
    src_size = ft_strlen(src);

    if (dstsize <= dest_size)
    {
        return (src_size + dstsize);
    }
    i = 0;
    while (src[i] && )

}