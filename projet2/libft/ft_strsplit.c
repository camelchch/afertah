#include"libft.h"
int calculateur(char* str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!str)
	return (0);
	while (str[i] != '\0')
	{
		i++;
		if (str[i] != c && str[i] != '\0' )
			i++;
		if (str[i] == c && str[i-1] != c  && str[i] != '\0')
		{
			j++;
			i++;
		}
	}
	if (str[i] == '\0' && str[i-1] != c)
		j++;
	return (j);
}
char	**make_tab(char *str, char c)
{
	int i;
	int j;
	int r;
	char**	tab;

	i = 0;
	j = 0;
	r = 0;
	tab = malloc(sizeof(char*) *(calculateur(str, c)));
	if (!tab || !str)
	return (NULL);
	if (calculateur(str,c) == 0 || *str == '\0')
			return (tab);
	while (r < calculateur(str, c))
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i++] != c && str[i] != '\0')
			j++;
		tab[r] = malloc(sizeof(char) * j);
		if(!*tab)
			return (NULL);
		r++;
		j = 0;
	}
	return (tab);
}

char**	ft_strsplit(char *str, char c)
{
	int		r;
	int		i;
	int		j;
	char	**tab;
	
	i = 0;
	r = 0;
	j = 0;
	tab = make_tab(str, c);
	if (!tab || !str)
	return (NULL);
	if (calculateur(str,c) == 0 || *str == '\0')
		return (tab);
	while (r < calculateur(str, c))
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			tab[r][j] = str[i];
			i++;
			j++;
		}
		tab[r][j] = '\0';
		j = 0;
		r++;
	}
	tab[r] = NULL;
	return (tab);
}
