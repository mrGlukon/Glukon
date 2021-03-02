/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 08:15:41 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/27 08:27:13 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_STOCK
#define	FT_STOCK

#include <stdlib.h>
#include <stdio.h>
typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
#endif
