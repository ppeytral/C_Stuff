#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	string1[] = "Cette string n'est pas lowercase";
	char	string2[] = "";

	printf("%s , %d\n\n", string1, ft_str_is_lowercase(string1));
	printf("%s , %d\n\n", string2, ft_str_is_lowercase(string2));

	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			result = 0;
		i++;
	}
	return (result);
}
