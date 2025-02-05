int	ft_atoi(char *str)
{
	int	i;
	int	a;
	int	s;

	i = 0;
	a = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while ((str[i] <= '9' && str[i] >= '0'))
	{
		a = (a * 10) + (str[i] - 48);
		i++;
	}
	return (a * s);
}
