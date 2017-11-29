void ft_striteri(char *str,void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0') 
		{
			(*f)(i,&str[i]);
			i++;
		}
	}
}
