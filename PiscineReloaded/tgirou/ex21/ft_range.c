/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:54:50 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/03 14:43:09 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	tab = (int *)malloc((max - min) * sizeof(*tab));
	if (min < max)
	{
		min++;
		while (min < max)
		{
			tab[i++] = min++;
			printf("tab[%d] : %d\n", i - 1, tab[i - 1]);
		}
	}
	return (tab);
}
