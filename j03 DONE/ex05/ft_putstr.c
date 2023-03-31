#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(void)
{
	char str[] = "";

	ft_putstr(str);
	
	return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while	(*(str+i) != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
