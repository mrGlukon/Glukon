/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:29:38 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/22 17:38:33 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int	nb;

	if (argc == 1)
	{
		nb = 0;
		ft_putnbr(nb);
		printf("\n");
		nb = -1;
		ft_putnbr(nb);
		printf("\n");
		nb = -1020080000;
		ft_putnbr(nb);
		printf("\n");
		nb = 2147483647;
		ft_putnbr(nb);
		printf("\n");
		nb = -2147483648;
		ft_putnbr(nb);
		printf("\n");
		return (0);
	}
	ft_putnbr(atoi(argv[1]));
	return (0);
}
