#include <string.h>

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    char *ret;

    ret = (char*)dest;
    while (*dest)
        dest++;
    while (n--)
        if (!(*dest++ = *src++))
            return (ret);
    *dest = 0;
    return (ret);
}
