/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtraking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:56:40 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/28 12:03:06 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int				ft_place_it(char **tab, t_tetri *tmp, int i, int j)
{
	int			size;

	size = ft_strlen(*tab);
	if (tab[i][j] != '.')
		return (0);
	if (i + (tmp->x[1]) >= size || j + tmp->y[1] >= size)
		return (0);
	if (i + (tmp->x[2]) >= size || j + tmp->y[2] >= size)
		return (0);
	if (i + (tmp->x[3]) >= size || j + tmp->y[3] >= size)
		return (0);
	if (tab[i + (tmp->x[1])][j + tmp->y[1]] != '.')
		return (0);
	if (tab[i + (tmp->x[2])][j + tmp->y[2]] != '.')
		return (0);
	if (tab[i + (tmp->x[3])][j + tmp->y[3]] != '.')
		return (0);
	tab[i][j] = tmp->name;
	tab[i + (tmp->x[1])][j + tmp->y[1]] = tmp->name;
	tab[i + (tmp->x[2])][j + tmp->y[2]] = tmp->name;
	tab[i + (tmp->x[3])][j + tmp->y[3]] = tmp->name;
	return (1);
}

int				ft_erase_it(char **tab, t_tetri *tmp, int i, int j)
{
	tab[i][j] = '.';
	tab[i + (tmp->x[1])][j + tmp->y[1]] = '.';
	tab[i + (tmp->x[2])][j + tmp->y[2]] = '.';
	tab[i + (tmp->x[3])][j + tmp->y[3]] = '.';
	return (1);
}

int				ft_backtraking(t_list **begin_list, char **tab)
{
	int		i;
	int		j;
	t_list	*tmp;

	i = 0;
	if (*begin_list == NULL)
		return (1);
	tmp = *begin_list;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '.')
				if (ft_place_it(tab, tmp->content, i, j))
				{
					if (ft_backtraking(&(tmp->next), tab))
						return (1);
					ft_erase_it(tab, tmp->content, i, j);
				}
			j++;
		}
		i++;
	}
	return (0);
}
