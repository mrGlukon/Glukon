#include "ft_strncmp.c"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "hel";
	char	s2[] = "hel";
	int r;
	int r2;
	unsigned int n;

	n = 5;
	r = strncmp(s1, s2, n);
	printf("%d\n", r);
	r2 = ft_strncmp(s1, s2, n);
	printf("%d\n", r2);

	return (0);
}
