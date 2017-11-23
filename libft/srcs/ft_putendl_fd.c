#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int	i;

	i = 0;
	if (str && fd)
	{
		while (str[i] != '\0')
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
