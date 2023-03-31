#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str);
int	ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(void)
{
	char str1[] = "a";
	printf("%s => ", str1);
	printf("%s\n", ft_strrev(str1));

	char str2[] = "abcde";
	printf("%s => ", str2);
	printf("%s\n", ft_strrev(str2));	
	
	return 0;
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i = 0;

	while	(str[i] != '\0')
		i++;

	return i;
}

void	ft_putstr(char *str)
{
	int i = 0;

	while	(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strrev(char *str)
{
	int len = ft_strlen(str);
	char strrev[len + 1];
	int i = 0;

	while	(i <= len)
	{
		strrev[i] = str[len-1 - i];
		i++;
	}

	strrev[i] = '\0';

	i = 0;

	while	(i <= len +1)
	{
		str[i] = strrev[i];
		i++;
	}

	return str;
}
