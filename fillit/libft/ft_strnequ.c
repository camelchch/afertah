#include "libft.h"
int	ft_strnequ(char const *str1, char const *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str1 || !str2)
		return (0);
	while (str1[i] != '\0' &&  str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
			return (0);
		else
			i++;
	}
	return (1);
}
