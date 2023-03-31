#include <stdio.h>
#include <string.h>

int main(int arg, char **argv)
{
	int i;

	i = 0;
	while (argv[i][0] !='\0')
	{
		printf("%s\n",argv[i]);
		i++;
	}

	return (0);
}
