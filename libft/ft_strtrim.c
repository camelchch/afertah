#include "libft.h"
int verifspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i] != 
'\0')
		i++;
	return (i);
}
size_t verifmax(char *str)
{
	size_t	max;

	max = ft_strlen(str);
	while ((str[max-1] == ' ' || str[max-1] == '\n' || str[max-1] == '\t') &&
	max != 0)
		max--;
	return (max);
}

char *ft_strtrim(char *str)
{
	size_t		i;
	size_t		max;
	size_t		taille;
	size_t		start;
	char		*str2;

	if (!str)
		return (NULL);
	taille = 0;
	start = 0;
	i = verifspace(str);
	max = verifmax(str);
	start = verifspace(str);
	if (max != 0)
		taille = max - i;
	else
		taille = 0;
	str2 = malloc(sizeof(char) * taille + 1);
	if (!str2)
		return (NULL);
	i = 0;
	while (i < taille && str[start] != '\0')
		str2[i++] = str[start++];
	str2[i] = '\0';
	return (str2);
}
