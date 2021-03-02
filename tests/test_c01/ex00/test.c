#include <stdio.h>
#include <unistd.h>
#include "ft_ft.c"

void ft_ft(int *nbr);

int	main(void)
{
	int i;
	i = 5;
	printf("%d\n", i);
	int *a;
	a = &i;
	ft_ft(a);
	printf("%p\n%d", a, *a);
	return(0);
}
