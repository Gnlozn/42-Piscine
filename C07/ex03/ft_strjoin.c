#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	str = (char *)malloc(sizeof(strs) + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
