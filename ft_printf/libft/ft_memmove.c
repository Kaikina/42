/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:14:21 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 12:25:04 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	if (pdst >= psrc && pdst < psrc + len && len)
	{
		while (len)
		{
			*(pdst + len - 1) = *(psrc + len - 1);
			len--;
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
