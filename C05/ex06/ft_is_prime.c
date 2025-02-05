int	ft_is_prime(int nb)
{
	int		counter;

	counter = 2;
	if (nb <= 1)
		return (0);
	while ((long) counter * counter <= (long) nb)
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}
