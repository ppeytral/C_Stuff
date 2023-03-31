#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(-10));
	return (0);
}

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return -1;
	else
		if (index == 0)
			result = 0;
		else if (index == 1)
			result = 1;
		else 
			result = result + ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
