#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Prout.";
	printf("La chaine comporte %d caracteres.\n", ft_strlen(str));

	char str2[] = "Ceci est une chaine de 36 caracteres";
	printf("La chaine comporte %d caracteres.", ft_strlen(str2));

	return 0;
}

int	ft_strlen(char *str)
{
	int i = 0;

	while	(str[i] != '\0')
	{
		i++;
	}

	return i;
}
