/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:40:28 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 08:26:34 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str	*s_main;
	int	i;

	s_main = ft_strs_to_tab(argc, argv);
	i = 0;
	while (s_main[i].size != 0)
	{
		printf("%s %s\n", s_main[i].str, s_main[i].copy);
		i++;
	}

	return (0);
}
