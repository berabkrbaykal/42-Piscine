void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		v;
	int		h;

	if (x < 1 || y < 1)
		return ;
	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((h == 1 && v == 1) || (v == y && h == x && x > 1 && y > 1))
				ft_putchar('/');
			else if ((v == 1 && h > 1 && h < x) || (h == 1 && v > 1 && v < y) 
				|| (h == x && v > 1 && v < y) || (v == y && h > 1 && h < x))
				ft_putchar('*');
			else if ((h == x && v == 1) || (v == y && h == 1))
				ft_putchar('\\');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
