#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	string1[] = "Cette string n'est pas printable";
	char	string2[] = "";
	char	string3[] = "Cette string n'est pas printable";

	printf("%s , %d\n\n", string1, ft_str_is_printable(string1));
	printf("%s , %d\n\n", string2, ft_str_is_printable(string2));
	printf("%s , %d\n\n", string3, ft_str_is_printable(string3));
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(33 <= str[i] && str[i] <= 126))
			result = 0;
		i++;
	}
	return (result);
}
