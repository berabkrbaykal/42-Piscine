/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:46:20 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/17 05:02:35 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	value;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	value = 2;
	while (value * value <= nb)
	{
		if (value * value == nb)
			return (value);
		value++;
	}
	return (0);
}
/*
int main()
{
	printf("%d", ft_sqrt(25));
}
*/
