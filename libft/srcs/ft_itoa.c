#include "libft.h"

int	lennbr(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char*	npositive(int n)
{
	int		i;
	int		j;
	char*	str;

	i = lennbr(n);
	j = lennbr(n);
	str = malloc(sizeof(char) * j);
	if(!str)
		return (0);
	while (0 <= i)
	{
		str[i - 1] = ('0' + n % 10);
		n = n / 10;
		i--;
	}
	str[j] = '\0';
	return (str);
}

char*	nnegative(int n)
{
	int		i;
	int		j;
	char*	str;

	i = lennbr(n);
	j = lennbr(n);
	str = malloc(sizeof(char) * j + 2);
	if (!str)
		return (0);
	while (0 < i)
	{
		str[i] = ('0' - n % 10);
		n = n / 10;
		i--;
		if (i == 0)
			str[i] = '-';
	}
	str[j + 1] = '\0';
	return (str);
}

char* nzero(int n)
{
	char*	str;

	n = 0;
	str = malloc(sizeof(char) * 2);
	str[n] = '0';
	str[1] = '\0';
	return (str);
}

char*	ft_itoa(int n)
{
	char*	str;

	if (n > 0)
		str = npositive(n);
	if (n < 0)
		str = nnegative(n);
	if (n == 0)
		str = nzero(n);
	return (str);
}
