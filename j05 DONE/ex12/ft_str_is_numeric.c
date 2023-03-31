#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	string1[] = "Cette string n'est pas numerique";
	char	string2[] = "165465487546548748796878754123456789023158797";

	printf("%s , %d\n\n", string1, ft_str_is_numeric(string1));
	printf("%s , %d\n\n", string2, ft_str_is_numeric(string2));

	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			result = 0;
		i++;
	}
	return (result);
}
