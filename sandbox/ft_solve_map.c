/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 07:32:49 by aazrael           #+#    #+#             */
/*   Updated: 2021/03/10 10:41:50 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_write_sol(t_map **s, int x, int y)
{
	(*s)->i = x;
	(*s)->j = y;
	(*s)->max = (*s)->c_max;
}

void	ft_check_sol(char **map, t_map **s, int i, int j)
{
	int x;
	int	y;

	x = i;
	y = j;
	while (i < (x + (*s)->c_max))
	{
		if (map[i++][(y - 1 + (*s)->c_max)] != (*s)->empty)
		{
			(*s)->c_ok = 0;
			return ;
		}
	}
	while (j < (y + (*s)->c_max))
	{
		if (map[(x - 1 + (*s)->c_max)][j++] != (*s)->empty)
		{
			(*s)->c_ok = 0;
			return ;
		}
	}
	if ((*s)->c_max > (*s)->max)
		ft_write_sol(s, x, y);
}

void	ft_solve_map(char **map, t_map **s)
{
	int	i;
	int	j;

	i = 0;
	while (i < ((*s)->n_lines))
	{
		j = 0;
		while (j < (*s)->str_len)
		{
			(*s)->c_max = 1;
			(*s)->c_ok = 1;
			while (((*s)->c_max <= ((*s)->n_lines) - i) &&
			((*s)->c_max <= ((*s)->str_len - j)) && (*s)->c_ok)
			{
				ft_check_sol(map, s, i, j);
				(*s)->c_max++;
			}
			j++;
		}
		i++;
	}
}
