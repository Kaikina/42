/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:07:04 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/05 13:57:52 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int r;

	i = 1;
	if (nb >= 0 & nb < 13)
	{
		r = 1;
		while (i++ < nb)
		{
			r *= i;
		}
	}
	else
		r = 0;
	return (r);
}
