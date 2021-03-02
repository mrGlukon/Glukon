/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c03_ex04.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:20:20 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/21 12:32:40 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[] = "hellyeah";
	char	s2[] = "ell";
	char	*istr;
	
	printf("%s %s\n", s1, s2);
    istr = ft_strstr(s1, s2);
	 if ( istr == '\0')
      printf ("not found\n");
   else
      printf ("found pos %d ", istr-s1+1);
	return (0);
}
