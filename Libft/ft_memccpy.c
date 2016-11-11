/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:46:30 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/08 12:18:53 by tgirou           ###   ########.fr       */
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
		while (i < (int)n)
		{
			if ((pdst[i] = psrc[i]) == c)
				return (dst);
			i++;
		}
	}
	return (NULL);
}
