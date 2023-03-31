#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[50] = "Ceci est un ";
	char	src[50] = "exemple.";
	char	dest1[50] = "Ceci est un ";
	char	src1[50] = "exemple.";	
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));

	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
