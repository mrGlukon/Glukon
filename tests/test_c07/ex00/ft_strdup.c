/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:26:54 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 10:44:08 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		x;
	int		i;
	char	*p;

	x = ft_strlen(src);
	p = (char*)malloc(x * sizeof(char) + 1);
	if (NULL == p)
		return (0);
	else
	{
		i = 0;
		while (i < x)
		{
			p[i] = src[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
