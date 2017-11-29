int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	if (!s1 && !s2)
		return (0);
	while (ps1[i] == ps2[i] && ps1[i] != '\0' && ps2[i] != '\0')
		i++;
	return (ps1[i] - ps2[i]);
}

