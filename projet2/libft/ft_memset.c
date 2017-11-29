#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	char			*tmp;
	
	tmp = str;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
return (tmp);
}
