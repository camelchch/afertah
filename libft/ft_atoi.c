#include "libft.h"
int	ft_atoi(const char *str)
{
	size_t	sum;
	size_t	i;
	size_t	neg;

	sum = 0;
	i = 0;
	neg = 1;
	while (*str == '\r' || *str == '\v' || *str == ' ' || *str == '\n' || *str
== '\t' || *str == '\f')
		str++;
	if (*str == '-' && str[i + 1] != '+')
	{
			neg = - 1;
			i++;
	}
	while (*str == '0')
		str++;
	if (str[i] == '+' && str[i + 1] != '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		sum = sum * 10 + (str[i++] - 48);
	if (i > 19 || sum > 9223372036854775807)
		return ((neg == 1) ? -1 : 0);
	return (sum * neg);
}
