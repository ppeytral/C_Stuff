#include <stdio.h>
#include <unistd.h>

void	*ft_print_memory(void *addr, int size);
void	ft_putchar(char c);
void	ft_print_addr_hex(unsigned char *addr);
void	ft_print_content_hex(unsigned char *addr);
void	ft_print_content(unsigned char *addr);

int	main(void)
{
	char	string[] = "Boujour les amis, c'est fou tout ce qu'on eut faire \t\b\v\nec un ordinateur et blablabla elkj";
	
	ft_print_memory(string, 130);

	return (0);

}

void	ft_putchar(char c)
{
	if (!(c <= 31 || c == 127))
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	ft_print_addr_hex(unsigned char *addr)
{
	int	i;
	int 	buffer1;
	int	buffer2;
	
	i = 7;
	while (i >= 0)
	{
		if (*(addr + i) / 16 < 10)
			buffer1 = *(addr + i) / 16 + 48;
		else
			buffer1 = *(addr + i) / 16 + 87;
		if (*(addr + i) % 16 < 10)
			buffer2 = *(addr + i) % 16 + 48;
		else
			buffer2 = *(addr + i) % 16 + 87;
		ft_putchar(buffer1);
		ft_putchar(buffer2);
		i--;
	}
	ft_putchar(':');
	ft_putchar(' ');

}

void	ft_print_content_hex2(unsigned char *addr)
{
	int	i = 0;
	int	buffer1;
	int	buffer2;

	while (*(addr + i) != '\0' && i < 16)
	{
		if (*(addr + i) / 16 < 10)
			buffer1 = *(addr + i) / 16 + 48;
		else
			buffer1 = *(addr + i) / 16 + 87;
		if (*(addr + i) % 16 < 10)
			buffer2 = *(addr + i) % 16 + 48;
		else
			buffer2 = *(addr + i) % 16 + 87;
		ft_putchar(buffer1);
		ft_putchar(buffer2);
		if (i%2)
			ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		ft_putchar(' ');
		i++;
	}
}

void	ft_print_content(unsigned char *addr)
{
	int	i;

	i = 0;
	while (i < 16 && *(char *)(addr + i) !=0)
	{
		ft_putchar(*(char *)(addr + i));
		i++;
	}
	write(1, "\n", 1);

}

void	*ft_print_memory(void *addr, int size)
{
	unsigned char buffer[16];
	int	i = 0;
	int	j = 0;

	while (i < size && (*(unsigned char *)(addr + i) != '\0'))
	{
		j = 0;
		while (j < 16)
		{
			if (*(unsigned char *)(addr + i) == '\0')
				buffer[j] = '\0';	
			else	
			{	
				buffer[j] = *(unsigned char *)(addr + i);
				i++;
			}
			j++;
		}
		ft_print_addr_hex(buffer);
		ft_print_content_hex(buffer);
		ft_print_content(buffer);
	}
	return (addr);
}


void	ft_print_content_hex(unsigned char *addr)
{
	int	i;

	i= 0;
	while (i < 16)
	{
		if (*(addr + i) == '\0')
			ft_putchar(' ');
		else
		{
			if (*(addr + i) / 16 < 10)
				ft_putchar(*(addr + i) / 16 + 48);
			else
				ft_putchar(*(addr + i) / 16 + 87);
			if (*(addr + i) % 16 < 10)
				ft_putchar(*(addr + i) % 16 + 48);
			else
				ft_putchar(*(addr + i) % 16 + 87);
			if (i%2)
				ft_putchar(' ');
		}
		i++;
	}
	ft_putchar(' ');
}

