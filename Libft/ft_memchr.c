#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    char *p;

    p = (char *)s;
    if (n)
    {

        while (n  > 0)
        {
            if (*p++ == c)
                return ((void *)(p - 1));
            n--;
        }
    }
    return (NULL);
}
