/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:45:40 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 17:27:45 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_is_negative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char		*ft_itoa(int n)
{
	int		tmp;
	int		len;
	int		negative;
	char	*str;

	len = 2;
	negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_is_negative(&n, &negative);
	tmp = n;
	while (tmp /= 10)
		len++;
	len += negative;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
