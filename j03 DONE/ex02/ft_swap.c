#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int *a, *b;
	int i = 10, j = 20;

	a = &i;
	b = &j;
	
	printf("Au départ, *a=%d et *b=%d\n",*a , *b);
	ft_swap(a,b);
	printf("A l'arrivée, *a=%d, et *b=%d", *a, *b);
}

void	ft_swap(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
