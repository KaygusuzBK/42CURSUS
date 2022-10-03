#include "libft.h";
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *ptr_d;
    char *ptr_s;
    size_t i;

    ptr_d = (char *)dst;
    ptr_s = (char *)src;
    i = 0;
    while (i < n)
    {
        *(ptr_d + i) = *(ptr_s + i);
        if (*((unsigned char *)ptr_s + i) == (unsigned char)c)
            return (dst + i + 1);
        i++;
    }
    return (NULL);
}