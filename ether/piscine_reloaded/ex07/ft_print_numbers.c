#include<unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_number(void)
{
	int	i;
	i = 0;
	while(i <= 9 && i>=0)
	{
		ft_putchar('0' + i);
		i++;
	}
}
int main()
{
	ft_print_number();
return (0);
}
