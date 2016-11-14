/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:38:17 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 17:10:45 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_blank(int c)
{
		return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	unsigned int		i;
	size_t	len;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_is_blank(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && ft_is_blank(s[len]))
		len--;
	return (new = ft_strsub(s, i, len - (size_t)i + 1));
}
