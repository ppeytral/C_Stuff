#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	string1[] = "Cette string n'est pas alphabetique";
	char	string2[] = "";

	printf("%s , %d\n\n", string1, ft_str_is_alpha(string1));
	printf("%s , %d\n\n", string2, ft_str_is_alpha(string2));

	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z' || 'a' <= str[i] && str[i] <= 'z'))
			result = 0;
		i++;
	}
	return (result);
}
