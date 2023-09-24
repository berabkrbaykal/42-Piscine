#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_replace(char *dest, char a, char b)
{
	int i;
	i = 0;

	while (dest[i] != 0)
	{
		if (dest[i] == a)
			ft_putchar(b);
		else
			ft_putchar(dest[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (!(av[3][1] || av[2][1]))
			ft_replace(av[1], av[2][0], av[3][0]);
	}
	ft_putchar('\n');
	return (0);
}
