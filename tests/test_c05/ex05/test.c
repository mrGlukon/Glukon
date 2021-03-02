/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 13:04:48 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("sqrt of number 4 is: %d\n", ft_sqrt(4));

		return (0);
	}
	printf("sqrt of number %d is: %d\n", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
	return (0);
}
