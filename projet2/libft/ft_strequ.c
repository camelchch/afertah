int	ft_strequ(char* str1, char* str2)
{
	int	i;

	i = 0;
	if (!str1 || !str2)
		return (0);

	while (str1[i] != '\0' &&  str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		else
		i++;
	}
	return (1);
}
