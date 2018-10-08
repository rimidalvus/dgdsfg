#include "header.h"

void    ft_travel()
{
    int i;
    int j;

    max = 0;
    i_need = 0;
    j_need = 0;
    i = 0;
    j = 0;
	while (i < 10)
	{
		while (j < 28)
		{
			if (max < ft_search(j, i, size_buff, size_string))
			{
				max = ft_search(j, i, size_buff, size_string);
				i_need = i;
				j_need = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
	i = i_need;
	j = j_need;
	while (i < (max + i_need))
	{
		while (j < (max + j_need))
		{
			map[i][j++] = 'x';
		}
		j = j_need;
		i++;
	}
}