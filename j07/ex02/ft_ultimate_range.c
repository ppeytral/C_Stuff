#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}

int main(void)
{
	int	min = 5;
	int	max = 10;
	int	**tab;
	int	size;
	int	i = 0;
	
	printf("%d\n",ft_ultimate_range(tab, min, max));
	while(i < max - min)
	{
		printf("%d, ", (*tab)[i]);
		i++;
	}
}
