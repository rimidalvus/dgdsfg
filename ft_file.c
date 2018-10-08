#include "header.h"

void    ft_open(char *argv)
{
    fd = open(argv, O_RDWR);
	ft_read_number();
	ft_read_map();
}

void    ft_read_number()
{
	size_string = 0;
	size_buff = 0;
	while ((rd = read(fd, buff, 1)))
	{
		if (buff[0] >= '0' && buff[0] <= '9') 
			size_string = size_string * 10 + buff[0] - 48;
		if (buff[0] == '\n')
			break;
	}
	map = malloc(sizeof(char*) * size_string);
	while ((rd = read(fd, buff, 1)))
	{
		if (buff[0] != '\n')
			t_buff[size_buff++] = buff[0];
		else
		{
			t_buff[size_buff] = '\0';
			break;
		}
	}
}

void	ft_read_map()
{
	int i;
	int j;

	i = 0;
	while (i < size_buff)
		map[i++] = malloc(sizeof(char) * size_buff);
	map[0] = t_buff;
	j = 0;
	i = 1;
	printf("%i\n", size_buff);
	printf("%i\n", size_string);
	while ((rd = read(fd, buff, 1)))
	{
		//printf("%c\n", buff[0]);
		if (buff[0] != '\n')
			map[i][j++] = buff[0];
		else
		{
			map[i++][j] = '\0';
			j = 0;
		}
	}
}