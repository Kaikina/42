/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:45:59 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 10:46:02 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *p;

	p = (char *)s;
	if (n)
	{
		while (n > 0)
		{
			if (*p++ == c)
				return ((void *)(p - 1));
			n--;
		}
	}
	return (NULL);
}
