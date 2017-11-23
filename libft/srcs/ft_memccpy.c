#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	c1;
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char*)dest;
	tmp2 = (char*)src;
	c1 = (char)c;
	i = 0;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		if (tmp1[i] == c1)
			return (dest + (i + 1));
		i++;
	}
	return (NULL);
}
