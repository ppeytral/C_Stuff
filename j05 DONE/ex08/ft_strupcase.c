#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	string1[] = "Cette strING n'est pas uPPErCAse!";
	char	string2[] = "";

	printf("%s\n\n", string1);
	ft_strupcase(string1);
	printf("%s\n\n", string1);

	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
