#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    size_t idx;

    idx = 0;
    while (idx < n)
    {
        *((unsigned char *)str + idx) = c;
        idx++;
    }
    return (str);
}