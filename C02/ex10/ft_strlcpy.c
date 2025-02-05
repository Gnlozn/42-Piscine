unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	source_length;

	source_length = 0;
	i = 0;
	while (src[i] != '\0')
	{
		source_length++;
		i++;
	}
	if (size == 0)
		return (source_length);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (source_length);
}
