#include<stdio.h>
void ft_swap(int *a, int *b)
{
	int c;
	c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
 
int main()
{
	int a;
	int b;
	a = 5;
	b = 2;
	ft_swap(&a, &b);
	printf("%d , %d", a ,b);
	return (0);
}


