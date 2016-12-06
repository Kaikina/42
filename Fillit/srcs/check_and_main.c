/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 10:54:12 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/28 19:16:46 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int				ft_lines_check(char *buff)
{
	int			i;
	int			count_d;
	int			count_p;

	i = 0;
	count_d = 0;
	count_p = 0;
	if ((buff[4] != '\n' && buff[9] != '\n' && \
	buff[14] != '\n' && buff[19] != '\n'))
		return (0);
	while (buff[i])
	{
		if (buff[i] == '#')
			count_d++;
		if (buff[i] == '.')
			count_p++;
		i++;
	}
	if (count_p != 12 || count_d != 4 || (count_d + count_p != 16))
		return (0);
	return (1);
}

int				ft_tetriminos_check(char *buff)
{
	int			i;
	int			connection;

	i = 0;
	connection = 0;
	while (buff[i])
	{
		if (buff[i] == '#')
		{
			if (buff[i + 1] == '#' && i < 19)
				connection++;
			if (buff[i - 1] == '#' && i > 0)
				connection++;
			if (buff[i + 5] == '#' && i < 15)
				connection++;
			if (buff[i - 5] == '#' && i > 4)
				connection++;
		}
		i++;
	}
	if (connection != 6 && connection != 8)
		return (0);
	return (1);
}

t_list			**ft_open_and_check(int fd)
{
	char		buff[21];
	t_list		**begin_list;
	t_list		*tmp;
	int			name;
	int			read_ret;

	if (!(begin_list = (t_list **)malloc(sizeof(t_list))))
		return (0);
	*begin_list = NULL;
	tmp = *begin_list;
	name = 64;
	ft_bzero(buff, 21);
	read_ret = 1;
	while (read_ret)
	{
		read_ret = read(fd, buff, 20);
		if ((ft_lines_check(buff) == 0) || (ft_tetriminos_check(buff) == 0))
			ft_puterror();
		ft_push_back(begin_list, ft_create_content(++name, buff));
		if ((read_ret = read(fd, buff, 1)) && *buff != '\n')
			ft_puterror();
		ft_bzero(buff, 21);
	}
	return (begin_list);
}

void			ft_free_tab(t_list **begin_list)
{
	int			size;
	char		**tab;
	int			i;

	size = ft_tab_len(begin_list);
	tab = ft_init_tab(size);
	i = 0;
	while (!ft_backtraking(begin_list, tab))
	{
		while (tab[i])
		{
			free(tab[i++]);
		}
		free(tab);
		size++;
		tab = ft_init_tab(size);
	}
	ft_print_tab(tab);
	i = 0;
	while (tab[i])
	{
		free(tab[i++]);
	}
	free(tab);
}

int				main(int argc, char **argv)
{
	int			fd;
	t_list		**begin_list;

	if (argc != 2)
	{
		ft_putendl("usage : ./fillit source_file");
		return (0);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (0);
	begin_list = ft_open_and_check(fd);
	if (!(begin_list))
		return (0);
	ft_free_tab(begin_list);
	return (0);
}
