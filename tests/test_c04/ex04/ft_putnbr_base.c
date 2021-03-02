/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:21:49 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 14:32:54 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_correct(char *base)
{
	int c1;
	int c2;

	c1 = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[c1] != '\0')
	{
		c2 = c1 + 1;
		if (base[c1] == '+' || base[c1] == '-')
			return (0);
		if (base[c1] < 32 || base[c1] > 126)
			return (0);
		while (base[c2] != '\0')
		{
			if (base[c1] == base[c2])
				return (0);
			c2++;
		}
		c1++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	min_int(int nbr, char *base)
{
	if (nbr <= (-1 * ft_strlen(base)))
	{
		min_int(nbr / ft_strlen(base), base);
		min_int(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar(base[-nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (base_correct(base))
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			min_int(nbr, base);
			return ;
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			ft_putnbr_base(nbr % ft_strlen(base), base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
