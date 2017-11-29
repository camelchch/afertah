#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int verif(int *tab, int j)
{
	int i;
	i = 0;
	while ( tab[i] != '\0')
	{
		if(j == tab[i])
			return (1);

		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int i;
	int j;
	int n;
	int tab[100];
	j = 1;
	i = 1;
	n = 0;


	while (i < argc)
	{
		while (j < argc-1 && i < argc)
		{
			if (j < argc-1 && (argv[i][0] < argv[j][0] || verif(tab,j) == 0 || verif(tab,i) == 0))
			{
				j++;
			}

			if ( j == argc-1 )
			{
				ft_putstr(argv[i]);
				tab[n] = i;
				n++;
				ft_putchar('\n');
				i++;
			}
			tab[n] = '\0';

			if(argv[i][0] > argv[j][0])
				i++;
		}
		j = 0;
	}

	if (i == argc-1)
		i = 0;

	return (0);
}	
