#include "libft.h"
char	*ft_strstr(const char *str, const char *to_find)
{
	char	*tmp1;
	char	*tmp2;

	if (*to_find == '\0')
		return ((char*)str);
	while (*str != '\0')
	{
		tmp1 = (char*)str;
		tmp2 = (char*)to_find;
		while (*tmp1 == *tmp2 && *tmp1 != '\0' )
		{
			tmp1++;
			tmp2++;
		}
		if (*tmp2 == '\0')
			return ((char*)str);
		str++;
	}
	return (NULL);
}
