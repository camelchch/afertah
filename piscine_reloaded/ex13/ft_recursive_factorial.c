#include<stdio.h>
int ft_recursive_factorial(int nb)
{
	int sum;
	sum = 1;
	if(nb > 1)
	sum = nb * ft_recursive_factorial(nb - 1);

	return (sum);
}
int main()
{
	printf("%d", ft_recursive_factorial(9));
	return (0);
}

