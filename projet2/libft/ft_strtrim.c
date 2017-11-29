#include "libft.h"
char* ft_strtrim(char* str)
{
	int		i;
	int		max;
	int		taille;
	int		start;
	char	*str2;

	if (!str)
		return (NULL);
	taille = 0;
	start = 0;
	i = 0;
	max = ft_strlen(str);
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i] != '\0')
		i++;
	start = i;
	while ((str[max-1] == ' ' || str[max-1] == '\n' || str[max-1] == '\t') && max != 0)
		max--;
	if (max != 0)
		taille = max - i;
	else
		taille = 0;
	str2 = malloc(sizeof(char) * taille + 1);
	if (!str2)
		return (NULL);
	i = 0;
	while (i < taille && str[start] != '\0')
	{
		str2[i] = str[start];
		i++;
		start++;
	}
	str2[i] = '\0';
	return (str2);
}
