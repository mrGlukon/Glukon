/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:47:27 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 07:31:04 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *revstr(char *str)
{
	int	i;
	int j;
	char	t;

	i = 0;
	while (str[i])
		i++;
	i--;
	j = 0;
	while (j < i)
	{
		t = str[j];
        str[j] = str[i];
        str[i] = t;
		i--;
		j++;
	}
	return (str);
}

char	*test(char *a, char *b)
{
	int i=0;
	while (b[i])
		{
		a[i] = b[i];
		i++;
		}
	return (a);
}