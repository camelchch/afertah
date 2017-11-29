#include "libft.h"
char*	ft_strmapi(char const *str, char(*f)(unsigned int,char))
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
			strnws[i] = (*f)(i, str[i]);
			i++;
		}
		strnws[i] = '\0';
	}
	return (strnws);
}
