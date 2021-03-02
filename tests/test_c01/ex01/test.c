#include <stdio.h>
#include "ft_ultimate_ft.c"

void    ft_ultimate_ft(int *********nbr);

int    main(void)
{
    int i;
    int    *p1;
    int    **p2;
    int    ***p3;
    int    ****p4;
    int    *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;
    
    i = 5;
    p1 = &i;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    p6 = &p5;
    p7 = &p6;
    p8 = &p7;
    p9 = &p8;
    printf("%d\n", i);
    ft_ultimate_ft(p9);
    printf("%p\n%d", p9, *********p9);
    return(0);

}

