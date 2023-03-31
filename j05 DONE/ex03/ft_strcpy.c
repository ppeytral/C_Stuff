#include <stdio.h>

void	ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Bonjour, je suis un string d'origine";
	char	dest[] = "Je suis un string                   ";

	printf("src[]=%s\ndest[]=%s\n\n", src, dest);
	ft_strcpy(dest, src);
	printf("src[]=%s\ndest[]=%s\n\n", src, dest);
	return (0);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (src[i] >= '\0')
	{
		dest[i] = src[i];
		i++;
	}
}
