#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d", ft_find_next_prime(13564));
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;

	i = nb+1;
	j = 2;
	while (i)
	{
		while(i % j != 0)
			j++;
		if (i == j)
		{
			return (i);
			i = 0;
		}
		else
			i++;
	}
}
