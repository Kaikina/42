#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    char *ret;

    ret = 0;
    while (*s)
    {
       if (*s == (char)c)
            ret = s;
        *s++;
    }
    return (ret);
}
