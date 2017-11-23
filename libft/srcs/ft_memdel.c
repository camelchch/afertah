#include "libft.h"
void	ft_memdel(void** p)
{
	if(p)
	{
		free(*p);
		*p = 0;
	}
}
