#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(-5));
	
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	int	i;
	int result;
	
	if (nb > 0)
	{
		i = 0;
		result = 1;
		while (i++ < nb)
			result *= i;
		return (result);
	}
	else
		return (0);
}
