#include "ft_strdup.h"

int	main(int argc, char **argv)
{
	char string[] = "Je suis la string";

	printf("%s\n", string);
	printf("%s dupliquée.\n", ft_strdup(string));
	return (0);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = malloc(2 * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
