#include "libft.h"
char	*ft_strdup(char *src)
{
	int		i;
	char*	strdup;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	strdup = malloc(sizeof (char) * i + 1);
	if (!strdup)
		return(NULL);
	i = 0; 
	while (src[i] != '\0')
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
