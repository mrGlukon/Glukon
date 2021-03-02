/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:26:52 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/25 14:01:15 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*p;
	int i;

	min = -1000000000;
	max = 1000000000;
	p = ft_range(min, max);
	i = 0;
	while (i < (10))
		{
			printf("%d ", p[i]);
			i++;
		}
	return (0);
}