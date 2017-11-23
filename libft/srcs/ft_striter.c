void	ft_striter(char *str,void (*f)(char *))
{
	int	i;

	i = 0;
	if (str && f)
	{
		while (str[i] != '\0')
		{
			(*f)(&str[i]);
			i++;
		}
	}
}
