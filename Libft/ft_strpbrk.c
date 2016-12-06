/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <tgirou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 08:45:04 by tgirou            #+#    #+#             */
/*   Updated: 2016/12/06 08:49:54 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strpbrk(const char *str1, const char *str2)
{
	const char	*pstr2;
	int			c;
	int			sc;

	while ((c = *str1++) != 0)
	{
		pstr2 = str2;
		while ((sc = *pstr2++) != 0)
			if (sc == c)
				return ((char *)(str1 - 1));
	}
	return (NULL);
}
