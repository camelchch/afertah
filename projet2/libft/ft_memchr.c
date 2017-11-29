#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	c1;
	char	*tmp;

	c1 = (char)c;
	tmp = (char *)str;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == c)
			return (tmp + i);
		else
			i++;
	}
	return (0);
}
