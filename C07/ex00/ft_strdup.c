#include <stdlib.h>

int	length_of(char *src)
{
	int		i;

	i = 0;
	while (*src++ != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * length_of(src) + 1);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
