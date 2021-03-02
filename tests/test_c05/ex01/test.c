/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 10:33:58 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Factorial of 12 is: %d\n", ft_recursive_factorial(12));
		printf("Factorial of -1 is: %d\n", ft_recursive_factorial(-1));
		printf("Factorial of 0 is: %d\n", ft_recursive_factorial(0));
		printf("Factorial of 1 is: %d\n", ft_recursive_factorial(1));
		return (0);
	}
	printf("factorial of %d is: %d\n", atoi(argv[1]), ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
