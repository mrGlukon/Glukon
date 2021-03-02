/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:26:52 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/26 12:04:42 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int max;
	int min;
	int **range;
	int i;
	int size;

	range = NULL;
	i = 0;
	min = -15;
	max = 5;
	size = ft_ultimate_range(range, min, max);
	printf("%d\n", size);
	while (i < size)
	{
		//printf("%p ", range[i]);
		i++;
	}
	return (0);
}