#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	string1[] = "Cette strING n'est pas uPPErCAse!";
	char	string2[] = "";

	printf("%s\n\n", string1);
	ft_strlowcase(string1);
	printf("%s\n\n", string1);

	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
