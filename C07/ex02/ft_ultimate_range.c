#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		end;
	int		*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	end = max - min;
	array = malloc(sizeof(int) * end);
	*range = array;
	if (array == 0)
		return (-1);
	i = 0;
	while (i < end)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (end);
}
