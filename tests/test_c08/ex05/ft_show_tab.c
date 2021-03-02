/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 08:30:21 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 10:00:40 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
}

void	print_int(int nb)
{
	long int	i;
	long int	n;
	long int	z;

	n = nb;
	z = 0;
	i = 1000000000;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n == 0)
		ft_putchar(48);
	while (i > 0)
	{
		if ((n >= i || z) && i > 0)
		{
			ft_putchar(n / i + 48);
			n = n % i;
			z = 1;
		}
		i = i / 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0)
	{
		print_str(par[i].str);
		print_int(par[i].size);
		ft_putchar('\n');
		print_str(par[i].copy);
		i++;
	}
}
