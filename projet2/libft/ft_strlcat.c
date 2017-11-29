#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(dst));
	i = 0;
	while (dst[i] && i < size)
		i++;
	j = i;
	while (src[i-j] && i < size - 1)
	{
		dst[i] = src[i-j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
