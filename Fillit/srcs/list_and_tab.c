/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_and_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:10:49 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/28 12:07:47 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void		ft_push_back(t_list **begin_list, t_tetri *content)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (tmp != NULL)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_lstnew(content, sizeof(t_tetri) * 9);
	}
	else
		*begin_list = ft_lstnew(content, sizeof(t_tetri) * 9);
}

t_tetri		*ft_create_content(int name, char *buff)
{
	t_tetri	*tetri;
	int		i;
	int		j;
	int		line;
	int		column;

	i = -1;
	j = 0;
	line = -1;
	column = -1;
	if (!(tetri = (t_tetri *)malloc(sizeof(t_tetri))))
		return (NULL);
	while (buff[++i])
		if (buff[i] == '#')
		{
			if (line < 0 && column < 0)
			{
				column = i % 5;
				line = i / 5;
			}
			tetri->y[j] = i % 5 - column;
			tetri->x[j++] = i / 5 - line;
			tetri->name = name;
		}
	return (tetri);
}

int			ft_tab_len(t_list **begin_list)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *begin_list;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	i = ft_sqrt(i * 4);
	return (i);
}

char		**ft_init_tab(int tab_len)
{
	char	**tab;
	int		i;

	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (tab_len + 1))))
		return (0);
	tab[tab_len] = 0;
	while (i < tab_len)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * (tab_len + 1))))
			return (0);
		ft_memset(tab[i], '.', tab_len);
		tab[i][tab_len] = '\0';
		i++;
	}
	return (tab);
}
