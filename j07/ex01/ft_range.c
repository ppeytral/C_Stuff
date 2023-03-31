#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int i = 0;
	int *ptr;

	ptr = ft_range(8, 27);

	while(i < 27-8)
	{
		printf("%d, ",ptr[i]);
		i++;
	}

	return (0);
}

int	*ft_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min >= max)
		ptr = NULL;
	else
	{
		ptr = malloc(4*(max - min));
		while (i < max-min)
		{
			ptr[i] = min + i;
			i++;
		}
	}
	return (ptr);
}
