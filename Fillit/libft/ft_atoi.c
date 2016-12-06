/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 11:17:45 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/05 17:59:07 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' && ft_isdigit(nptr[i + 1]))
	{
		neg = -1;
		i++;
	}
	if (nptr[i] == '+' && ft_isdigit(nptr[i + 1]))
		i++;
	while (ft_isdigit(nptr[i]))
		nb = ((nb * 10) + ((nptr[i++] - '0') * neg));
	return (nb);
}
