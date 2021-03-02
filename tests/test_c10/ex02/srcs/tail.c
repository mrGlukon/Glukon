/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:13:25 by aazrael           #+#    #+#             */
/*   Updated: 2021/03/01 17:07:57 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	error(char *filename)
{
	write(2, "tail: ", 6);
	write(2, filename, ft_strlen(filename));
	write(2, ": No such file or directory\n", 28);
}

int	ft_atoi(char *str)
{
	int	i;
	int n;
	int sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * sign);
}

char	*put(int file, char *characters)
{
	int		j;
	char	buffer[28672];
	ssize_t	bytes;
	int		k;

	j = 0;
	while ((bytes = read(file, &buffer, 28672)))
	{
		k = 0;
		while (k < bytes)
		{
			characters[j] = buffer[k];
			++k;
			++j;
		}
	}
	characters[j] = '\0';
	return (characters);
}

void	display_head(int i, int count, char *filename)
{
	if ((i < count && i > 3) || (count > 4 && i == 3))
	{
		if (i > 3)
			write(1, "\n", 1);
		write(1, "==> ", 4);
		write(1, filename, ft_strlen(filename));
		write(1, " <==\n", 5);
	}
}

void	write_file(char *characters, int count_characters, int max)
{
	int	k;

	k = 0;
	while (characters[++k])
		if ((max > 0 && k >= count_characters - max) ||
				(max < 0 && k >= max * -1))
			write(1, &characters[k], 1);
}

void	display(int count, char *files[], int max, char *characters)
{
	int		file;
	int		i;
	int		count_characters;
	char	buffer[28672];
	ssize_t	bytes;

	i = 3;
	while (i < count)
	{
		display_head(i, count, files[i]);
		file = open(files[i], O_RDONLY);
		if (file == -1)
		{
			error(files[i++]);
			continue;
		}
		count_characters = 0;
		while ((bytes = read(file, &buffer, 28672)))
			count_characters += bytes;
		characters = malloc(sizeof(char) * count_characters);
		close(file);
		characters = put(open(files[i], O_RDONLY), characters);
		write_file(characters, count_characters, max);
		++i;
	}
}

int		main(int argc, char **argv)
{
	char	*chs;
	int		max;

	if (argc <= 2)
		write(2, "Option is missing.\n", 19);
	else if (argc <= 3)
		write(2, "File is missing.\n", 17);
	else
	{
		max = ft_atoi(argv[3]);
		display(argc, argv, max, chs);
	}
	return (0);
}