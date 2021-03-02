/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:40:28 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 08:31:54 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str	*s_main;
	
	s_main = ft_strs_to_tab(argc, argv);
	ft_show_tab(s_main);

	return (0);
}
