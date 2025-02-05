int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122))
			str++;
		else
			return (0);
	}
	return (1);
}
