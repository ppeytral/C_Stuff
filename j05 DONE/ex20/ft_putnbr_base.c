#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int	ft_strlen(char *string);
void	ft_putchar(char c);

int	main(void)
{
	int	nbr = 1000;
	char	base[] = "ompte";
	
//	printf("%d", ft_strlen(base));
//	printf("%c", base[15]);
	ft_putnbr_base(nbr, base);
	return (0);
}


void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else
	{
		if (nbr < ft_strlen(base))
			printf("%c", base[nbr]);
		else
		{
			ft_putnbr_base(nbr/ft_strlen(base), base);
			printf("%c", base[nbr % ft_strlen(base)]);
		}
	}
}

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
