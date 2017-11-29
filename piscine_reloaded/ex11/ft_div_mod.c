#include<stdio.h>

void ft_div_mod(int a , int b , int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int main()
{
	int mod;
	int div;
	 mod = 0;
	 div = 0;

	ft_div_mod(5, 2, &div, &mod);
	printf("%d , %d",div,mod);
	return (5);
}

