/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:26:54 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/25 19:29:44 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_malloc(int size, char **strs, char *sep)
{
	char	*str;
	int		sum;
	int		i;

	sum = 0;
	i = 0;
	while (i < size)
	{
		sum = sum + ft_strlen(strs[i]);
		i++;
	}
	sum = sum + ft_strlen(sep) * (size - 1);
	if (size <= 0)
		sum = 1;
	str = (char *)malloc(sizeof(char) * sum);
	if (NULL == str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		pos;
	char	*str;

	i = -1;
	pos = 0;
	str = ft_malloc(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[pos++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && (i != (size - 1)))
		{
			str[pos++] = sep[j++];
		}
	}
	str[pos] = '\0';
	return (str);
}
