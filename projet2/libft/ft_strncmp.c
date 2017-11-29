int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	if (!s1 && !s2)
		return (0);
	while (i < n  && ps1[i] != '\0' && ps2[i] != '\0')
			{
				if (ps1[i] != ps2[i])
					return ((unsigned char)s1[i] - (unsigned char)s2[i]);
				i++;
			}
return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
