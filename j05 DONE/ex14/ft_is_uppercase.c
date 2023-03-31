#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	string1[] = "Cette string n'est pas uppercase";
	char	string2[] = "";
	char	string3[] = "CETTESTRINGESTUPPERCASE";

	printf("%s , %d\n\n", string1, ft_str_is_uppercase(string1));
	printf("%s , %d\n\n", string2, ft_str_is_uppercase(string2));
	printf("%s , %d\n\n", string3, ft_str_is_uppercase(string3));

	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			result = 0;
		i++;
	}
	return (result);
}
