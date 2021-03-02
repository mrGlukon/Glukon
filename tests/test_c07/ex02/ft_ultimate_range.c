/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:26:54 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/25 18:10:47 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int long	i;
	int			**p;
	int long	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	p = (int**)(malloc(size * sizeof(*p)));
	if (NULL == p)
		return (0);
	while (i < size)
	{
		p[i] = (int*)malloc(sizeof(int));
		*p[i] = min + i;
		i++;
	}
	range = p;
	return (i);
}
