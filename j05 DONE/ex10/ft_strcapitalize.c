#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int i = 0;
	printf("%s\n\n", string);
	ft_strcapitalize(string);
	printf("%s\n\n", string);
	
	return (0);
}
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		while (!(32 <= str[i] && str[i] <= 64))
			i++;
		if (97 <= str[index] <= 122)
			str[index] -= 32;
		while (32 <= str[i] && str[i] <= 64)
			i++;
		index = i;
	}
	return (str);
}
