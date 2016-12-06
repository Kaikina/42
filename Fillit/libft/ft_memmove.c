/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:57:40 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/09 17:34:08 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmpdest;
	char *tmpsrc;

	tmpdest = dest;
	tmpsrc = (char *)src;
	if (src < dest)
	{
		while (n)
		{
			tmpdest[n - 1] = tmpsrc[n - 1];
			n--;
		}
	}
	else
	{
		while (n)
		{
			*tmpdest++ = *tmpsrc++;
			n--;
		}
	}
	return (dest);
}
