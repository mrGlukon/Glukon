/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:29:38 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/22 19:28:04 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int		main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("\n%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
