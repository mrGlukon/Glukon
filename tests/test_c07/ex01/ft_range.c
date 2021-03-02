/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:26:54 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/25 17:04:05 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int long	i;
	int			*p;
	int long	size;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	p = (int*)(malloc(size * sizeof(int)));
	if (NULL == p)
		return (0);
	while (i < size)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
