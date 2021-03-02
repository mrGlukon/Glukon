#include <stdio.h>
#include <unistd.h>
#include "ft_ultimate_div_mod.c"

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int x;
	int y;
	int *div;
	int *mod;

	div = &x;
	mod = &y;
	x = 10;
	y = 3;
	ft_ultimate_div_mod(div, mod);
	printf("%d %d", *div, *mod);
	return(0);
}
