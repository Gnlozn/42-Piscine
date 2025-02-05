int	ft_sqrt(int nb)
{
	int		counter;

	counter = 1;
	while (counter * counter <= nb && counter <= 46340)
	{
		if ((counter * counter) == nb)
			return (counter);
		counter++;
	}
	return (0);
}
