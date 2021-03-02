/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/23 16:37:09 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	printf("\n%d solutions\n", ft_ten_queens_puzzle());
	return (0);
}
