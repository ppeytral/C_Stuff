#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);
int	ft_is_valid(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
void	ft_test_print(int *tab, int size);

int	main(void)
{
	int	tab[] = {10, 1, 3, -82, 27, 36};

	if (ft_is_valid(tab, 6))
	{
		ft_test_print(tab, 6);
		printf("Tableau non valide");
		return (0);
	}
	else
	{
		ft_test_print(tab, 6);
		ft_sort_int_tab(tab, 6);
		ft_test_print(tab, 6);
		return (0);
	}
}

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

int	ft_is_valid(int *tab, int size)
{
	int	i;

	if (size <= 0 || tab[size - 1] == '\0')
		return (1);
	else
		return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
		{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(tab + i, tab + j);
				j = i + 1;
			}
			else 
				j++;
		}
		i++;
	}
}

void	ft_test_print(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i != size - 1)
			printf(", ");
		i++;
	}
	printf("\n\n");
}
