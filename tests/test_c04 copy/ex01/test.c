#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_putstr(char *str);

int	main(int argc, char **argv)
{
	char	*s1;

	s1 = "Run whit the parametr ;)\n";
	if (argc == 1)
	{
		ft_putstr(s1);
		return (0);
	}
	ft_putstr(argv[1]);
	return (0);
}
