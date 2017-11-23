#include "libft.h"
void	*ft_memcpy_rev(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	while (n--)
		tmp1[n] = tmp2[n];
	return (tmp1);
}
void	*ft_memmove(void *dest, const void* src, size_t n)
{
	if (src >= dest)
		return (ft_memcpy(dest, src, n));
	if (src < dest)
		return (ft_memcpy_rev(dest, src, n));
	return (dest);
}
