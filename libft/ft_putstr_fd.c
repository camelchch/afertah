#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int	i;

	i = 0;
	if (str && fd)
	{
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
}

