#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int n = 0;

	int *p1, **p2;

	p1 = &n;
	p2 = &p1;

	printf("&n=%d, n=%d\n&p1=%d, p1=%d, *p1=%d\n&p2=%d, p2=%d, *p2=%d, **p2=%d", &n, n, &p1, p1, *p1, &p2, p2, *p2, **p2);
}
