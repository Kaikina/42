#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *str;
    char *p;
    size_t n;

    n = strlen(src);
    str = (char *)malloc(sizeof(*str) * (n + 1));
    p = str;
    while (*src)
        *p++ = *src++;

    *p = '\0';
    return (str);
}
