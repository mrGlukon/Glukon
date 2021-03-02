/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:21:15 by aazrael           #+#    #+#             */
/*   Updated: 2021/03/01 15:38:21 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	disp(char *filename)
{
	int		file;
	char	c;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &c, 1))
		write(1, &c, 1);
	if (close(file) < 0)
		return ;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		disp(argv[1]);
	return (0);
}
