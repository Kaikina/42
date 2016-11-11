/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:16:37 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 14:17:13 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ret;

	ret = (char*)dest;
	while (*dest)
		dest++;
	while (n--)
		if (!(*dest++ = *src++))
			return (ret);
	*dest = 0;
	return (ret);
}
