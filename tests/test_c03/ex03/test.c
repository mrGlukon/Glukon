/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:20:20 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/21 08:40:57 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[] = "hell";
	char	s2[] = "helooofjf";
	unsigned int	i;

	i = 5;
	printf("%s\n", s1);
    ft_strncat(s1, s2, i);
	printf("%s\n", s1);

	return (0);
}
