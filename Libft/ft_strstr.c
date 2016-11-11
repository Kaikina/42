/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:18:19 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 15:02:23 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	char	c;
	size_t	len;
	char	sc;

	c = *little++;
	if (!c)
		return ((char *)big);
	len = ft_strlen(little);
	sc = *big++;
	while (ft_strncmp(big, little, len) != 0)
		while (sc != c)
			if (!sc)
				return ((char *)0);
	return ((char *)(big - 1));
}
