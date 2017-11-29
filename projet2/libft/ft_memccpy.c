#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	char			c1;
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char*)dest;
	tmp2 = (char*)src;
	c1 = (char)c;
	i = 0;
	if (n == 0)
	return (NULL);
	while (i <= n && tmp2[i] != c)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	if (tmp2[i] == c)
	{
		tmp1[i] = c;
		return (dest + (i + 1));
	}
	return (NULL);
}
