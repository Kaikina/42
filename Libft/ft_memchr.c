/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:45:59 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/15 11:33:47 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)s;
	if (n)
	{
		while (n > 0)
		{
			if (*p++ == (unsigned char)c)
				return ((void *)(p - 1));
			n--;
		}
	}
	return (NULL);
}
