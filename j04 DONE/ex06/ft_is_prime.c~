#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i = 0;

	while (i++ <= 20)
	{
		if (ft_is_prime(i))
			printf("Le nombre %d est premier.\n", i);
		else
			printf("Le nombre %d n'est pas premier.\n", i);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb >= 2)
	{
		while(nb % i != 0)
			i++;
		if (i == nb)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
