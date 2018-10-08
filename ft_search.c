#include "header.h"

int ft_search(int x, int y, int max_x, int max_y)
{
    int size;
    int i;
    int j;
    int k;

    size = 0;
    i = y;
    j = x;
    k = 0;
    while ((x + k) < max_x && (y + k) < max_y)
    {
        while (i <= (y + k))
        {
            while (j <= (x + k))
            {
                if (map[i][j] == 'o')
                {
                    return (k);
                }
                j++;
            }
            j = x;
            i++;
        }
        j = x;
        i = y;
        k++;
    }
    return (k);
}
