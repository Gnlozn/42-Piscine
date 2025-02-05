#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] - s2[i] > 0)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

void	ft_sort_params(char **tab, int size)
{
	int		counter1;
	int		counter2;
	char	*temp;

	counter1 = 1;
	while (counter1 < size - 1)
	{
		counter2 = 1;
		while (counter2 < size - 1)
		{
			if (ft_strcmp(tab[counter2], tab[counter2 + 1]) == 1)
			{
				temp = tab[counter2];
				tab[counter2] = tab[counter2 + 1];
				tab[counter2 + 1] = temp;
			}
			counter2++;
		}
		counter1++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
