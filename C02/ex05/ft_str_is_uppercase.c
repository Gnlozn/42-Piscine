int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90))
			str++;
		else
			return (0);
	}
	return (1);
}
