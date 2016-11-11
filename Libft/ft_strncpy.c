/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:19:53 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 14:20:29 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;

	ret = (char *)dest;
	while (*dest++ = *src++)
		if (!--n)
			return (ret);
	while (n--)
		*dest++ = 0;
	return (ret);
}
