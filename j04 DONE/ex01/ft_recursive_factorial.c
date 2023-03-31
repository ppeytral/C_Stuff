#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	printf("%d", ft_iterative_factorial(-2));
	
	return (0);		
}

int	ft_iterative_factorial(int nb)
{
	int	result;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
			result = 1;
		else
			result = nb * ft_iterative_factorial(nb - 1);
		return (result);		
}

