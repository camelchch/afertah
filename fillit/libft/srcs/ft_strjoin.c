#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		len1;
	int		len2;
	char*	strjoin;

	if (!str1 || !str2)
		return (NULL);
	len1 = (str2 ? ft_strlen((char*)str1) : 0);
	len2 = (str2 ? ft_strlen((char*)str2) : 0);
	strjoin = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!strjoin)
		return (NULL);
	strjoin = ft_strcpy(strjoin, (char*)str1);
	strjoin = ft_strcat(strjoin, (char*) str2);
	strjoin[len1 + len2 +1] = '\0';
	return (strjoin);
}
