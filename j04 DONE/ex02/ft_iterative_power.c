#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(10, 3));
	printf("%d\n", ft_iterative_power(10, -3));
	
	return (0);
}

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;
	
	i = 0;
	result = 1;
	if (power >= 0)
	{
		while(i++ < power)
			result *= nb;
		return (result);
	}
	else
		return (0);
}
