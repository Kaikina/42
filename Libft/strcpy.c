#include <string.h>

char    *ft_strcpy(char *dest, const char *src)
{
    char *ret;

    ret = (char *)dest;
    while (*dest++ = *src++)
        ;
    return (ret);
}
