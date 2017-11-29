#include<stdio.h>
int ft_iterative_factorial(int nb)
{
	int i;
	int sum;
	i = 1;
	sum = 1;
	while(i<=nb)
	{
		sum = sum * i;
		i++;
	}
	return (sum);
}
int main()
{
	int nb;
	nb = 4;
	printf("%d",ft_iterative_factorial(nb));
	return (0);
}
