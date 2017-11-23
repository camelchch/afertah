#include "libft.h"

void	ft_putnbr_fd(int nb,int fd)
{
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr_fd(nb / 10 , fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	if (nb < 10 && nb > -2147483648)
	{
		ft_putchar_fd('0' + nb, fd);
	}
}
