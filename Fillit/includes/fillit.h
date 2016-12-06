/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:19:29 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/28 17:34:47 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"
# include <fcntl.h>

typedef struct		s_tetri
{
	char			name;
	int				x[4];
	int				y[4];
}					t_tetri;

int					main(int argc, char **argv);
t_list				**ft_open_and_check(int fd);
int					ft_control_params(int argc);
int					ft_lines_check(char *buff);
int					ft_tetriminos_check(char *buff);
t_tetri				*ft_create_content(int name, char *buff);
void				ft_push_back(t_list **begin_list, t_tetri *content);
t_tetri				*ft_create_content(int name, char *buff);
void				ft_print_list(t_list **begin_list);
char				**ft_init_tab(int tab_len);
int					ft_tab_len(t_list **begin_list);
int					ft_backtraking(t_list **begin_list, char **tab);
void				ft_print_tab(char **tab);
int					ft_place_it(char **tab, t_tetri *tmp, int i, int j);
int					ft_erase_it(char **tab, t_tetri *tmp, int i, int j);
void				ft_puterror(void);

#endif
