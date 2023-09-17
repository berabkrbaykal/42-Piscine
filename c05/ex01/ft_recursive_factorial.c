/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:25:17 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/17 00:23:25 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		fact *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (fact);
}
/*
int main()
{
	printf("%d",ft_recursive_factorial(5));
}
*/
