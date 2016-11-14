/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:24:10 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 11:18:32 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = (long int)n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd(((nbr % 10) + '0'), fd);
}
