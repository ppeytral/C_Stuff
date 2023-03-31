#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_ft(int *nbr);


int	main(void)
{
	int a = 0;
	int *n;
	n = &a;

	ft_ft(n);
	
	printf("a= %d", a);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr)
{
	*nbr = 42;
}
