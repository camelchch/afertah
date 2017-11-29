#include<stdlib.h>
#include<stdio.h>
int *ft_range(int min, int max)
{
	int *tab;
	int i;
	i = 0;
	tab = malloc(sizeof(int)*((max-min)+2));
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	return tab;
}
int main()
{
	int i;
	i = 0;
	int *tab;
	tab = ft_range(5, 14);
	while(i<= 10)
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}


