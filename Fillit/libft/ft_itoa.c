/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:35:31 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/05 09:34:23 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_taille(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*mod;
	int		len;

	len = ft_taille(n);
	if (!(mod = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	mod[len--] = '\0';
	while ((n > 9) || n < (-9))
	{
		if ((n % 10) < 0)
			mod[len--] = -(n % 10) + '0';
		else
			mod[len--] = (n % 10) + '0';
		n = (n / 10);
	}
	if ((n % 10) < 0)
	{
		mod[len] = -(n % 10) + '0';
		mod[len - 1] = '-';
	}
	else
		mod[len] = n % 10 + '0';
	return (mod);
}
