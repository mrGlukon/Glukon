#include "ft_putstr.c"

void ft_putstr(char *str);

int	main(void)
{
	char	s[12] = "hello, mate";
	char	*p;
	
	p = s;
	ft_putstr(s);
	return(0);
}
