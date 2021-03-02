#include <stdio.h>
#include "ft_swap.c"

void ft_swap(int *a, int *b);

int	main(void)
{
	int i1;
	int i2;
	int *p1;
	int *p2;

	p1 = &i1;
	p2 = &i2;
	i1 = 5;
	i2 = 42;
	printf("%d %d\n", i1, i2);
	ft_swap(p1, p2);
	printf("%d %d", i1, i2);
   return(0);
}
