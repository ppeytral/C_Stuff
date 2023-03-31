#include <unistd.h>
#include <stdio.h>

int	ft_is_negative(char *str);
int	ft_is_valid(char *str);
int	ft_str_len(char *str);
int	ft_atoi(char *str);
int	ft_tenthpow(int n);


int	main(void)
{
	char	str1[] = "564654l";	
	if	(ft_is_valid(str1))
	{
		printf("La chaine de caractere \"%s\" donne un entier i=%d\n", str1, ft_atoi(str1));
	} 
	else
       	{	
		printf("Chaine de caractere non valide.");
	}	
	return	0;
}



int	ft_is_negative(char *str)
{
	if	(str[0] == '-')
		return 1;	
	else	return 0;
}



int	ft_is_valid(char *str)
{
	int i = 0, result = 0;
	int length = ft_str_len(str);

	while	(i < length)
	{
		if	(!(str[i] == '-' || str[i] >= '0' && str[i] <= '9'))
		{
			return 0;
			break;
		}

		else
		{
			i++;
			result = 1;
		}
	}
}

int	ft_str_len(char *str)
{
	int	i = 0;
	while	(str[i] != '\0')
		i++;
	return	i;
}



int	ft_tenthpow(int n)
{
	int	i = 0, resultat = 1;

	if	(n == 0)
		return 	resultat;
	else
		{
			while	(i < n)
			{
				resultat *= 10;
				i++;
			}
			return 	resultat;
		}
}



int	ft_atoi(char *str)
{
	int	length = ft_str_len(str);
	int	i = 0, result = 0;	
	if	(ft_is_negative(str))
	{
		while	(i < length-1)
		{
			str[i] = str[i+1];
			i++;
		}
		i=0;
		while	(i < length)
		{
			result = result + ((str[i]-48) * ft_tenthpow(length - 1 - i));
			i++;
		}	
		return 	-result;
	}	
	else
	{
		while	(i < length)
		{
			result = result + ((str[i]-48) * ft_tenthpow(length - 1 - i));
			i++;
		}
		return	result;
	}
}
