#include "string.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int     i;

    i = 0;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
