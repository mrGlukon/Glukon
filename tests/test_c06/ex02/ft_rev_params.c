/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:24:53 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/24 10:21:59 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = argc - 1;
	while (i > 0)
	{
		str = argv[i];
		j = 0;
		while (str[j] != '\0')
		{
			ft_putchar(str[j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
