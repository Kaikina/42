/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:08:52 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 14:45:17 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *ps1;
	char *ps2;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	while (n--)
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		else
		{
			ps1++;
			ps2++;
		}
	return (0);
}
