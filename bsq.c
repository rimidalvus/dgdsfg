#include "header.h"

int	main(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (argc == 2)
	{
		ft_open(argv[1]);
		ft_travel();
		ft_printmap();
	}
	return (0);
}