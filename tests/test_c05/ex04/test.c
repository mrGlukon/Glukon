/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 12:43:51 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Fibonacci of number -1 is: %d\n", ft_fibonacci(-1));
		printf("Fibonacci of number 0 is: %d\n", ft_fibonacci(0));
		printf("Fibonacci of number 1 is: %d\n", ft_fibonacci(1));
		printf("Fibonacci of number 2 is: %d\n", ft_fibonacci(2));
		printf("Fibonacci of number 3 is: %d\n", ft_fibonacci(3));
		printf("Fibonacci of number 4 is: %d\n", ft_fibonacci(4));
		printf("Fibonacci of number 5 is: %d\n", ft_fibonacci(5));
		printf("Fibonacci of number 44 is: %d\n", ft_fibonacci(44));
		return (0);
	}
	printf("Fibonacci of number %d is: %d\n", atoi(argv[1]), ft_fibonacci(atoi(argv[1])));
	return (0);
}
