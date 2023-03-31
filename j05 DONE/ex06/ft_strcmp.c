#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[] = "Hell";
	char	str2[] = "Hello";

	printf("%d", ft_strcmp(str1, str2));
	
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while ( s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
			i++;
	if (s1[i] == '\0' && s2[i] != '\0')
		result = - s2[i];
	else if (s2[i] == '\0' && s1[i] != '\0')
		result = s1[i];
		else
		result = s1[i] - s2[i];
	return (result);
}

