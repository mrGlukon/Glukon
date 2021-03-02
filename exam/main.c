/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:43:59 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 07:18:58 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *revstr(char *str);
char	*test(char *a, char *b);

int	main(void)
{
	char a[] = "123456789";
	char b[] = "test1";

	//a = "test1";
	//printf("%s\n", a);
	//printf("%s\n", revstr(a));
	test(a, b);
	printf("%s\n", a);
	printf("%s\n", b);
	return (0);
}
