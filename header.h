
#ifndef HEADER_H
# define HEADER_H

#include "sys/types.h"
#include "sys/stat.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int     ft_search(int x, int y, int max_x, int max_y);
void    ft_open(char *argv);
void    ft_read_number();
void	ft_read_map();
void    ft_travel();
void    ft_printmap();
char **map;
int rd;
int fd;
char t_buff[1002];
int size_string;
int size_buff;
char buff[1];
int max;
int i_need;
int j_need;
#endif
