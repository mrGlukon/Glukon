/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:29:38 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 17:12:20 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("my function: %d\n", ft_atoi(" ---+-+3000000000ab567"));
		return (0);
	}
	printf("my function:		%d\n", ft_atoi(argv[1]));
	printf("library function:	%d\n", atoi(argv[1]));
	return (0);
}
