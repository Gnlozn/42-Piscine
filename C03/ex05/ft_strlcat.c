unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;
	unsigned int	size_dest;

	i = 0;
	size_src = 0;
	size_dest = 0;
	while (src[size_src] != '\0')
		size_src++;
	if (size == 0)
		return (size_src);
	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[i] != '\0' && (size_dest + i) < (size - 1))
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	if (size_dest > size)
		return (size_src + size);
	return (size_dest + size_src);
}
