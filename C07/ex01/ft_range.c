#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;
	int		end;

	if (min >= max)
		return (0);
	end = max - min;
	range = malloc(sizeof(int) * end);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
