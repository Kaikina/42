#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *psrc;
    int i;
    char *pdest;

    if (n)
    {
        pdest = dest;
        psrc = src;
        i = 0;
        while (i < n)
        {
            if ((pdest[i] = psrc[i]) == c)
                return (dest);
            i++;
        }
    }
    return (NULL);
}
