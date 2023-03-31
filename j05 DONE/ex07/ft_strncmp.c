#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[] = "Hello you";
	char	str2[] = "Heli you";

	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", ft_strncmp(str1, str2, 6));
	printf("%d\n", strncmp(str1, str2, 4));
	printf("%d\n", strncmp(str1, str2, 6));
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	result;
	
	i = 0;
	while ( s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
			i++;
	if (s1[i] == '\0' && s2[i] != '\0')
		result = - s2[i];
	else if (s2[i] == '\0' && s1[i] != '\0')
		result = s1[i];
		else
		result = s1[i] - s2[i];
	return (result);
}
