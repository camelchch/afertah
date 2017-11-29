#include "libft.h"
#include <string.h>
char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	char *pdst;

	i = n;
	pdst = dst;
	while (n > 0 && *src != '\0')
	{
		*pdst++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*pdst++ = '\0';
		n--;
	}
	return (dst);
}
