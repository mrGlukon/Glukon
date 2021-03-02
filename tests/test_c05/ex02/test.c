/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 11:24:57 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Power 2 of number 2 is: %d\n", ft_iterative_power(2, 2));
		printf("Power 2 of number -2 is: %d\n", ft_iterative_power(-2, 2));
		printf("Power 3 of number -2 is: %d\n", ft_iterative_power(-2, 3));
		printf("Power 0 of number 0 is: %d\n", ft_iterative_power(0, 0));
		printf("Power -1 of number 2 is: %d\n", ft_iterative_power(2, -1));
		printf("Power 31 of number 2 is: %d\n", ft_iterative_power(2, 31));
		return (0);
	}
	printf("Power %d of number %d is: %d\n", atoi(argv[2]), atoi(argv[1]), ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
