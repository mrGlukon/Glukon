/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:30:00 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/19 11:47:00 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;
	if (*b != 0)
	{
	temp1  = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
	}
}