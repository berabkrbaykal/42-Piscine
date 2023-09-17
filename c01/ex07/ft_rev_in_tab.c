/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_in_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:22:16 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/09 15:07:40 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	tmp;

	x = 0;
	while (x < (size / 2))
	{
		tmp = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size -1 - x] = tmp;
		x++;
	}
}
