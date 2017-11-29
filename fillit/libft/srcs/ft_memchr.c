#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)s;
	while (n > 0 && *tmp != (unsigned char)c)
	{
		n--;
		tmp++;
	}
	if (n == 0)
		return (NULL);
	else
		return (tmp);
}
