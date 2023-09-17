/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:21:40 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/14 18:37:47 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str != 0 && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (sign * result);
}
/*
int	main()
{
	printf("%d",ft_atoi("++-+++----6757abc567"));	
}
*/
