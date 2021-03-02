/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:26:52 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/25 13:04:08 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*src;
	char	*p;
	
	src = "test";
	p = ft_strdup(src);
	p = &src[0];
	printf("%s\n", &p[0]);
	printf("%s\n", ft_strdup(src));
	return (0);
}