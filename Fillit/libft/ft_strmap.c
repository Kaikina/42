/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:02:19 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/15 16:02:53 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		len;
	int		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (f && s && len != 0)
	{
		while (s && i != len)
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
