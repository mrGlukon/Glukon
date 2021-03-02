#include <stdio.h>
#include <unistd.h>
#include "ft_div_mod.c"
void ft_div_mod(int a, int b, int *div, int *mod);

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
	ft_div_mod(x, y, div, mod);
	printf("%d %d", *div, *mod);
	return(0);
}
