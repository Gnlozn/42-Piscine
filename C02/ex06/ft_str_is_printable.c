int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 126))
			str++;
		else
			return (0);
	}
	return (1);
}
