/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:15:30 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 14:16:22 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	size_t	n;

	n = strlen(src);
	str = (char *)malloc(sizeof(*str) * (n + 1));
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}