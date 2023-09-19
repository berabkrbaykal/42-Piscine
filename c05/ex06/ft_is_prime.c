/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 05:04:03 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/17 05:17:21 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	value;

	if (nb <= 1)
		return (0);
	value = 2;
	while (value < nb && nb > 2)
	{
		if (nb % 2 == 0)
			return (0);
		else if (nb % value == 0)
			return (0);
		value++;
	}
	return (1);
}
/*
int main()
{
	printf("%d",ft_is_prime(27644437));
}
*/
