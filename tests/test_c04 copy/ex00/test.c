/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrael <aazrael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:54:55 by aazrael           #+#    #+#             */
/*   Updated: 2021/02/22 17:55:34 by aazrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_strlen(char *str);

int	main(int argc, char **argv)
{
	char	*s1 = "helpfkjljjkjdflkjdg;jkl;fsgkj;ldkfjgl;kjsdklgfhjdklfjsghljkdhgjkhkltghjldhtgjlsdhlkbvh;dlkfhjblkdfhbiljhdk;fbhjdfg;lihbildhjgb;djlkbfhlkjhblkdhblkhljhklktgjlksibhlisnblknh;jl;kjkljlkjkljkilbjhilrtjbilernlktbjnslkbhwlhbjlshgljerhligwh5gilwerjhipgwjhio5jldfgjerso;igjilerjli;sjdhgilserhjilghesilbvhuksdhbiul.ds.hlivhljjhjkhjklhjklhesoihelpfkjljjkjdflkjdg;jkl;fsgkj;ldkfjgl;kjsdklgfhjdklfjsghljkdhgjkhkltghjldhtgjlsdhlkbvh;dlkfhjblkdfhbiljhdk;fbhjdfg;lihbildhjgb;djlkbfhlkjhblkdhblkhljhklktgjlksibhlisnblknh;jl;kjkljlkjkljkilbjhilrtjbilernlktbjnslkbhwlhbjlshgljerhligwh5gilwerjhipgwjhio5jldfgjerso;igjilerjli;sjdhgilserhjilghesilbvhuksdhbiul.ds.hlivhljjhjkhjklhjklhesoi";

	if (argc == 1)
	{
		printf("library functin: %d\n", (int)strlen(s1));
		printf("my function %d\n", ft_strlen(s1));
		return (0);
	}
	printf("strlen is: %d\n", ft_strlen(argv[1]));
	return (0);
}
