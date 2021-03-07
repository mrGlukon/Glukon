#include <stdio.h>
#include <stdlib.h>

int		ilen(int n)
{
	int	i;

	i = 1;
	while (n / i)
		i = i * 10;
	return (i / 10);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++	;
	return (i);
}


int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", atoi(argv[1]));
	return 0;
}
