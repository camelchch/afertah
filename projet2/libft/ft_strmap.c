#include "libft.h"
char*	ft_strmap(char const *str, char(*f)(char))
{
	int		i;
	char*	strnws;
	strnws = NULL;
	
	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
		strnws = malloc(sizeof(char) * i + 1);
		if (!strnws)
			return (0);
		i = 0;
		while (str[i] != '\0')
		{
			strnws[i] = (*f)(str[i]);
			i++;
		}
		strnws[i] = '\0';
	}
	return (strnws);
}
