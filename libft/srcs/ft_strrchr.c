char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	c1;

	i = 0;
	c1 = (char)c;
	while (str[i] != '\0')
		i++;
	while (0 <= i)
	{
		if(str[i] == c1)
			return ((char*)str + i);
		else
			i--;
	}
	if (c1 == '\0')
		return ((char*)str + i);
	return (0);
}
