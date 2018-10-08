#include "header.h"

void    ft_printmap()
{
    int i;
	int j;

	j = 0;
	i = 0;
    while (i < size_string)
	{
		while (map[i][j])
			printf("%c", map[i][j++]);
		printf("\n");
		j = 0;
		i++;
	}
}