char	*ft_strchr(const char *s, int c)
{
	char	*b;
	int		i;

	i = 0;
	b = (char *)s;
	while (b[i])
	{
		if ((char)c == b[i])
			return (&b[i]);
		i++;
	}
	if (b[i] == (char )c)
		return (&b[i]);
	return (0);
}

