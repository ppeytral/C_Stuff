#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr = malloc(4444 * 10);

	int i = 0;

	while (i < 10)
	{
		ptr[i]= i;
		i++;
	}

	i = 0;

	while (i <10)
	{
		printf("%d, ", ptr[i]);
		i++;
	}

	return (0);
}
