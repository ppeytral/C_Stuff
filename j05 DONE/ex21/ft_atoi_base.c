#include <stdio.h>

int	ft_atoi_base(char *string, char *base);
int	ft_strlen(char *string);
int	ft_power(int nb, int power);
int	ft_strstr(char *string, char c);
int	ft_is_valid(char *base, char *string);
int	ft_multipletimes(char *string, char c);

int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	char	string[] = "3E8";

	printf("%d", ft_atoi_base(string, base));
	return (0);
}

int	ft_atoi_base(char *string, char *base)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (ft_is_valid(base, string) == 0)
		return(0);
	else
	{
		if (string[i] == '-')
		{
			printf("-");
			i++;
		}
		if (string[i] == '+')
			i++;
		while (string[i] != '\0')
		{
			result += (ft_strstr(base, string[i]) * ft_power(ft_strlen(base), ft_strlen(string) -1 - i));
			i++;
		}
		return (result);
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

int	ft_power(int nb, int power)
{
	int	i;
	int	result;
	
	i = 0;
	result = 1;
	if (power >= 0)
	{
		while(i++ < power)
			result *= nb;
		return (result);
	}
	else
		return (0);
}

int	ft_strstr(char *string, char c) 
{
	int	i;
	int	result;

	i = 0;
	result = - 1;
	while (string[i] != '\0')
	{
		if (string[i] == c)
			result = i;
		i++;
	}
	return (result);
}

int	ft_is_valid(char *base, char *string) //retourn 0 si la base ou la string ne sont pas valides.
{
	int	i;
	int	result = 1;
	
	i = 0;
	while ( base[i] != '\0')
	{
		if (ft_multipletimes(base, base[i]) != 1 || base[i] == '+' || base[i] == '-' || base[0] == '\0' || base[1] == '\0')
			result = 0;
		i++;
	}
	i = 0;
	while (string[i] != '\0')
	{
		if (ft_strstr(base, string[i]) < 0 && string[0] != '+' && string[0] != '-' )
			result = 0;
		i++;
	}
	return (result);
}

int	ft_multipletimes(char *string, char c) //retourne le nombre de fois que le char c apparait dans la string.
{
	int	i = 0;
	int	compteur = 0;

	while (string[i] != '\0')
	{
		if (string[i] == c)
			compteur++;
		i++;
	}
	return (compteur);
}
