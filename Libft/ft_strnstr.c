/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:51:38 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 15:06:49 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*cpy;
	char	*buf;
	size_t	length;

	buf = (char *)(big + len);
	cpy = (char *)big;
	if (!little)
		return ((char *)big);
	length = ft_strlen(little);
	while ((cpy = ft_strchr(cpy, *little)) && cpy <= buf)
	{
		if ((cpy + length <= buf) && !ft_strncmp(cpy, little, length))
			return (cpy);
		cpy++;
	}
	return (NULL);
}
