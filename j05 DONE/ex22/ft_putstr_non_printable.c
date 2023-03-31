#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_dec_to_hex(int nbr, char *hex);
void	ft_char_to_hex(int nbr, char *base);
int	ft_strlen(char *string);


int	main(void)
{
	char string[] = "Coucou\ntu vas bien?";

	ft_putstr_non_printable(string);	
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{	
			ft_putchar(92);
			ft_char_to_hex(str[i], "0123456789abcdef");
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

void	ft_char_to_hex(int nbr, char *base)
{
	ft_putchar(base[nbr / 16]);
	ft_putchar(base[nbr % 16]);
}

