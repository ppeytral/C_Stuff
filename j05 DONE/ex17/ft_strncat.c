#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src,unsigned int nb);

int	main(void)
{
	char	dest[50] = "Ceci est un ";
	char	src[50] = "exemple.";
	char	dest1[50] = "Ceci est un ";
	char	src1[50] = "exemple.";	
	printf("%s\n", ft_strncat(dest, src,4));
	printf("%s\n", strncat(dest1, src1,4));

	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
