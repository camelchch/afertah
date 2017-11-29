#include "libft.h"
char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	c1;

	c1 = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c1)
			return ((char*)str + i);
		i++;
	}
	if (c == '\0')
		return ((char*)str + i);
	return (NULL);
}
