/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:13:25 by aazrael           #+#    #+#             */
/*   Updated: 2021/03/01 17:14:45 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		disp(int count, char **files)
{
	int		file;
	char	buffer[28672];
	int		i;
	ssize_t	bytes;
	char	*filename;

	i = 0;
	while (++i <= count)
	{
		filename = files[i];
		file = open(filename, O_RDWR);
		if (file < 0)
		{
			write(2, "cat: ", 5);
			write(2, filename, ft_strlen(filename));
			if (errno == 21)
				write(2, ": Is a directory\n", 17);
			else
				write(2, ": No such file or directory\n", 28);
			continue ;
		}
		while ((bytes = read(file, &buffer, 28672)))
			write(1, &buffer, bytes);
		close(file);
	}
	return (errno);
}

void	term(void)
{
	char	c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	ret;

	ret = 0;
	if (argc == 1)
		term();
	else
		ret = disp(argc - 1, argv);
	return (ret);
}
