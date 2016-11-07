#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
    memset(s, '\0', n);
}
