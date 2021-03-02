#include "ft_strcmp.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "helpzzzzzz";
	char	s2[] = "hel";

	int r;
	int r2;
	r = strcmp(s1, s2);
	printf("%d\n", r);
	r2 = ft_strcmp(s1, s2);
	printf("%d\n", r2);

	return (0);
}
