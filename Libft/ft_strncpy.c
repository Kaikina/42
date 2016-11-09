#include <string.h>

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    char    *ret;

    ret = (char *)dest;
    while (*dest++ = *src++)
        if (!--n)
            return (ret);
    while (n--)
        *dest++ = 0;
    return (ret);
}
