#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *tmp;
    ft_memcpy(dest, src, n);
    return (dest);
}
