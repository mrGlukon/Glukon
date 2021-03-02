/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:29:38 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 14:31:57 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putnbr_base(42, "qwerty");
		return (0);
	}
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
