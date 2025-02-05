int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (s1[counter] != '\0' && s2[counter] != '\0' && counter < (n -1))
	{
		if (s1[counter] == s2[counter])
		{
			counter++;
			continue ;
		}
		else
			break ;
	}
	return (s1[counter] - s2[counter]);
}
