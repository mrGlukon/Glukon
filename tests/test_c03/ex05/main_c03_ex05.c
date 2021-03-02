/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c03_ex05.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:20:20 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/21 13:51:14 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			*dest = "hellyeah1";
	char			*src = "5ell";
	unsigned int	size;
	unsigned int	n;
	size_t			size2;
	size_t			n2;
	
	size = 2;
	size2 = 2;
	printf("%s %s\n", dest, src);
    n = ft_strlcat(dest, src, size);
	printf ("my %d\n", n);
    //n2 = strlcat(dest, src, size2);
	//printf ("right %zu\n", n2);
  	return (0);
}