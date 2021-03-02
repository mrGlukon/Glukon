/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:21:49 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/22 19:31:19 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_correct(char *base)
{
	int c;
	int c2;

	c = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[c] != '\0')
	{
		c2 = c++;
		if (base[c] == '+' || base[c] == '-' || base[c] == 32)
			return (0);
		if (base[c] < 32 || base[c] > '~' || (base[c] >= 9 && base[c] <= 13))
			return (0);
		while (base[c2] != '\0')
		{
			if (base[c] == base[c2])
				return (0);
			c2++;
		}
		c++;
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

int	ft_atoi(char *str)
{
	int	i;
	int n;
	int sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;

	r = ft_atoi(str);
	if (base_correct(base))
	{
		if (r >= ft_strlen(base))
		{
			ft_atoi_base(r / ft_strlen(base), base);
			ft_atoi_base(r % ft_strlen(base), base);
		}
		else
			ft_putchar(base[r]);
	}
	retutn (r);
}
