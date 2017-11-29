#include "libft.h"
char	*ft_strnew(size_t len)
{
	char	*str;

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	ft_bzero(str, len);
	return (str);
}

