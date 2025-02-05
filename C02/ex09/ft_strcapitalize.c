char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i - 1] >= 65 && str[i - 1] <= 90)
				str[i] = str[i] + 32;
			else if (str[i - 1] >= 97 && str[i - 1] <= 122)
				str[i] = str[i] + 32;
			else if (str[i - 1] >= 48 && str[i - 1] <= 57)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
