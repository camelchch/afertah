#include<stdio.h>
void ft_ft( int *nbr)
{
	*nbr = 42;

}

int main()
{
	int n;
	n = 500;

	ft_ft( &n);
	printf("%d",n);
	return 0;
}

	
