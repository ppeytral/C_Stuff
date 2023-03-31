#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a,*b;

	int div, mod;
	a = &div;
	b = &mod;
	
	*a = 10;
	*b = 5;
	printf("Au départ *a=%d, et *b=%d\n\n", *a, *b);
	ft_ultimate_div_mod(a,b);
	printf("A l'arrivée *a=%d, et *b=%d\n\n", *a, *b);

	*a = 10;
	*b = 0;
	printf("Au départ *a=%d, et *b=%d\n\n", *a, *b);
	ft_ultimate_div_mod(a,b);
	printf("A l'arrivée *a=%d, et *b=%d\n\n", *a, *b);

	*a = 10;
	*b = 3;
	printf("Au départ *a=%d, et *b=%d\n\n", *a, *b);
	ft_ultimate_div_mod(a,b);
	printf("A l'arrivée *a=%d, et *b=%d\n\n", *a, *b);
	return 0;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int buffer_div;
	int buffer_mod;
	
	if	(*b != 0)
	{
		buffer_div = *a / *b;
		buffer_mod = *a % *b;

		*a = buffer_div;
		*b = buffer_mod;

	}
	else	printf("Division par 0 interdite!\n\n");
}

