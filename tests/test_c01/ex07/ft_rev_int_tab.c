/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:40:19 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/19 20:36:23 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int temp;

	i = 1;
	while (i <= (size / 2))
	{
		temp = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = temp;
		i++;
	}
}