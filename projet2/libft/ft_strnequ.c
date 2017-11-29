
int	ft_strnequ(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!str1 || !str2)
		return (0);

	while (str1[i] != '\0' &&  str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
			return (0);
		else
		i++;
	}
	return (1);
}
