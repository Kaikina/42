/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:46:30 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 12:17:11 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*psrc;
	int		i;
	char	*pdst;

	if (n)
	{
		pdst = (char *)dst;
		psrc = (char *)src;
		i = 0;
		while (n--)
		{
			*pdst = *psrc;
			if (*psrc == c)
				return ((void *)pdst + 1);
			pdst++;
			psrc++;
		}
	}
	return (NULL);
}
