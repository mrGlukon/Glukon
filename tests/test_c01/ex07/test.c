#include <stdio.h>
#include "ft_rev_int_tab.c"

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	a[5];
	int size;

	int *tab;

	tab = &a[0];
	size = 5;
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	ft_rev_int_tab(tab, size);
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
}

