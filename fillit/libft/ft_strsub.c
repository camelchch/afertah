#include "libft.h"
char*	ft_strsub(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char*	strf;

	i = 0;
	strf = malloc(sizeof(char) * len + 1);
	if (!strf || !str)
		return (NULL);
	while (i < len)
	{
		strf[i] = str[start];
		i++;
		start++;
	}
	strf[i] = '\0';
	return (strf);
}
