#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);

int	main(void)
{
	char	str1[11] = "Hello";
	char	str2[11] = " you";
	char	str3[11] = "Hello";
	char	str4[11] = " you";

	strlcat(str1, str2, 11);
	printf("%s\n", str1);
	printf("%d\n", strlcat(str1, str2, 11));


	ft_strlcat(str3, str4, 11);
	printf("%s\n", str3);
	printf("%d\n", ft_strlcat(str3, str4, 11));
	
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i = 0;
	int	j = 0;
	int	result;

	result = ft_strlen(dest) + ft_strlen(src);
	while (dest[i] != '\0')
		i++;
	while (i < size && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);	
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return i;
}
