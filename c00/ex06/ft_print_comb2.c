/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:41:50 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/05 12:02:58 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	b;
	int	e;

	b = 0;
	while (b < 100)
	{
		e = b + 1;
		while (e < 100)
		{
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			ft_putchar(' ');
			ft_putchar(e / 10 + '0');
			ft_putchar(e % 10 + '0');
			if (b != 98)
				write(1, ", ", 2);
			e++;
		}
		b++;
	}
}
