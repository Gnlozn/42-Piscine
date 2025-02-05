int	check_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while ((long) counter * counter <= (long) nb)
	{
		if (nb % counter == 0)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (check_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
