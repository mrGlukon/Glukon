/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:24:53 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/24 15:59:21 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
}

void	ft_print_params(int n, char **str)
{
	int		i;
	int		j;
	char	*argv;

	i = 0;
	while (i < n - 1)
	{
		argv = str[i];
		j = 0;
		while (argv[j] != '\0')
		{
			ft_putchar(argv[j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str[argc];
	char	*tmp;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		tmp = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		str[i] = tmp;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], str[i]) < 0)
			{
				tmp = str[i];
				str[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argc, str);
	return (0);
}
