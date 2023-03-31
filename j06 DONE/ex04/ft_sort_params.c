#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	char buffer[20][20];
	int j;
	char temp[20];

	i = 1; 
	while (i < argc)
	{
		strcpy(buffer[i-1], argv[i]);
		i++;
	}
	i = 0;
	while (i < argc-1)
	{
		j = 0;
		while(j < argc-1)
		{
			if (strcmp(buffer[i], buffer[j]) < 0)
			{
				strcpy(temp, buffer[i]);
				strcpy(buffer[i], buffer[j]);
				strcpy(buffer[j], temp);
				j++;
			}
			else
				j++;
		}
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("%s\n", buffer[i]);
		i++;
	}
	return (0);
}
