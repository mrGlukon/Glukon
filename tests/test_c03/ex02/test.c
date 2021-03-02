/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:20:20 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/21 08:30:14 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[] = "hellы";
	char	s2[] = "hell";
	
	//strcat(s1, s2);
	printf("%s\n", s1);
    ft_strcat(s1, s2);
	printf("%s\n", s1);

	return (0);
}
