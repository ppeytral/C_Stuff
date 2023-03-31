#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int *div, *mod;
	int a,b;
	
	a = 10;
	b = 5;
	ft_div_mod(a,b,div,mod);
	printf("Pour a=%d, b=%d, div=%d et mod=%d\n\n", a, b, *div, *mod);

	a = 10;
	b = 0;
	ft_div_mod(a,b,div,mod);
	printf("Pour a=%d, b=%d, div=%d et mod=%d\n\n", a, b, *div, *mod);

	a = 10;
	b = 3;
	ft_div_mod(a,b,div,mod);
	printf("Pour a=%d, b=%d, div=%d et mod=%d\n\n", a, b, *div, *mod);
	


	return 0;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if	(b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else	printf("Division par 0 interdite!\n\n");
}

