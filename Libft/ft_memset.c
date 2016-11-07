#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    char *str;

    str = NULL;
    if (n)
    {
        str = s;
        while (n-- > 0)
        {
            *str++ = c;
        }
    }
    return (s);
}
