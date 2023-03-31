#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%D\n", ft_iterative_power(10,3));
	printf("%D\n", ft_iterative_power(10,-3));
	
	return (0);
}

int	ft_iterative_power(int nb, int power)
{
	int result;
	
	if (power < 0)
		return (0);
	else 
		if (power == 0)
		result = 1;
		else
			result = nb * ft_iterative_power(nb, power - 1);
	return (result);
}

