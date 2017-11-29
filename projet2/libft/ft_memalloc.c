#include "libft.h"
void	*ft_memalloc(size_t len)
{
	void*	str;

	str = (void*)malloc(sizeof(void) * len);
	if (!str)
	return (NULL);
		ft_bzero(str, len);
	return (str);
}
