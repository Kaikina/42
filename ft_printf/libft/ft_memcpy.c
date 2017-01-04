/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:29:59 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 11:56:23 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*psrc;
	int		i;
	char	*pdst;

	pdst = (char *)dst;
	psrc = (char *)src;
	if (n)
	{
		i = 0;
		while (i < (int)n)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}
