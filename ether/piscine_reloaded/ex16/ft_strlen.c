#include<stdio.h>
int ft_strlen(char *str)
{
	int len;
	len = 0;

	while(str[len] != '\0')
	{
		len++;
	}

	return (len);
}
int main()
{
	char str[]= "coucou les amis";
	printf("%d",ft_strlen(str));
	return (0);
}

