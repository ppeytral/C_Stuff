#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	dest[] = "Ceci est un est";
	char	src[] = "est";
	char	dest1[] = "Ceci est un est";
	char	src1[] = "est";	
	printf("%s\n", strstr(dest1, src1));
	printf("%s\n", ft_strstr(dest, src));
	printf("%s\n", dest);

	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{		
			while (str[i + j] == to_find[j] && to_find[j] !='\0')
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
			else
				j = 0;
		}
		i++;
	}
	if (str[i] == '\0')
		return (NULL);
}
