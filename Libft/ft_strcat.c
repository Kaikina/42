#include <string.h>

char    *ft_strcat(char *dest, const char *src)
{
    char *ret;

    ret = (char *)dest;
    while (*dest)
        dest++;
    while (*dest++ = *src++)
        ;
    return (ret);
}
