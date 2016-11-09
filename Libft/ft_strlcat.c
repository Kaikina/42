#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstsize;
    size_t srcsize;

    dstsize = strlen(dst);
    srcsize = strlen(src);
    if (dstsize + srcsize >= size)
        return (dstsize + srcsize);
    ft_memcpy(dst + dstsize, src, srcsize + 1);
    return (dstsize + srcsize);
}
