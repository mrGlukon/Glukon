/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 08:53:53 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 08:14:08 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char				*ft_strcpy(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * src_len + 1);
	if (NULL == dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*s_1;

	i = 0;
	s_1 = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (NULL == s_1)
		return (0);
	while (i < ac && av[i] != 0)
	{
		s_1[i].size = ft_strlen(av[i]);
		s_1[i].str = av[i];
		s_1[i].copy = ft_strcpy(av[i]);
		i++;
	}
	s_1[i].size = 0;
	s_1[i].str = 0;
	s_1[i].copy = 0;
	return (s_1);
}
