/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 16:18:13 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("next prime -4 next prime: %d\n", ft_find_next_prime(-4));
		printf("next prime 0 next prime: %d\n", ft_find_next_prime(0));
		printf("next prime 1 next prime: %d\n", ft_find_next_prime(1));
		printf("next prime 2 next prime: %d\n", ft_find_next_prime(2));
		printf("next prime 3 next prime: %d\n", ft_find_next_prime(3));
		printf("next prime 4 next prime: %d\n", ft_find_next_prime(4));
		printf("next prime 198 next prime: %d\n", ft_find_next_prime(198));
		printf("next prime 199 next prime: %d\n", ft_find_next_prime(199));
		printf("next prime 200 next prime: %d\n", ft_find_next_prime(200));
		return (0);
	}
	printf("next prime %d is %d\n", atoi(argv[1]), ft_find_next_prime(atoi(argv[1])));
	return (0);
}
