#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int	 ft_strlen(char *str);

int	main(void)
{
	char	s[12] = "hello, mate";
	char	*p;
	int i;
	int l2;

	p = s;
	i = ft_strlen(s);
	l2 = strlen(p);
	printf("%d\n%d", i, l2);
	return(0);

}
