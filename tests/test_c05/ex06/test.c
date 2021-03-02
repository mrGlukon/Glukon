/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 16:05:15 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("number -4 is prime (1) or not(0)?: %d\n", ft_is_prime(-4));
		printf("number 0 is prime (1) or not(0)?: %d\n", ft_is_prime(0));
		printf("number 1 is prime (1) or not(0)?: %d\n", ft_is_prime(1));
		printf("number 2 is prime (1) or not(0)?: %d\n", ft_is_prime(2));
		printf("number 3 is prime (1) or not(0)?: %d\n", ft_is_prime(3));
		printf("number 4 is prime (1) or not(0)?: %d\n", ft_is_prime(4));
		printf("number 198 is prime (1) or not(0)?: %d\n", ft_is_prime(198));
		printf("number 199 is prime (1) or not(0)?: %d\n", ft_is_prime(199));
		return (0);
	}
	printf("sqrt of number %d is: %d\n", atoi(argv[1]), ft_is_prime(atoi(argv[1])));
	return (0);
}
