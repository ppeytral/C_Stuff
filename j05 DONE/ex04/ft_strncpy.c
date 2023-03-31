#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	sourc[] = "Bonjour, je suis un string d'origine";
	char	desti[] = "Je suis un string                   ";

	printf("src[]=%s\ndest[]=%s\n\n", sourc, desti);
	printf("src[]=%s\ndest[]=%s\n\n", sourc, ft_strncpy(desti, sourc, 60));
	printf("%s", sourc);
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
