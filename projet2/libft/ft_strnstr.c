#include "libft.h"
char	*ft_strnstr(char* str, char* to_find, int n)
{
	char	*tmp1;
	char	*tmp2;

	if (*to_find == '\0')
		return ((char*)str);
	while (*str != '\0')
	{
		tmp1 = (char*)str;
		tmp2 = (char*)to_find;
		while (*tmp1 == *tmp2 && *tmp1 != '\0' && n)
		{
			tmp1++;
			tmp2++;
			n--;
		}
		if (*tmp2 == '\0')
			return ((char*)str);
		str++;
	}
	return (NULL);
}
