#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *psrc;
    int i;
    char *pdest;
    if (n)
    {
        pdest = (char *)dest;
        psrc = (char *)src;
        i = 0;
        while (i < n)
        {
           pdest[i] = psrc[i];
           i++;
        }
    }
}
