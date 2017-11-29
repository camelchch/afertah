#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*tmp2;
	char	*tmp1;

	i = 0;
	tmp1 = (char*)s1;
	tmp2 = (char*)s2;
	if (n == 0)
		return (s1);
	while (i < n)
	{
		tmp1[i] = tmp2[i];
			i++;
	}
	return (s1);
}
