/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:38:12 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/12 12:05:35 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] < s2[i])
	{
		return (-1);
	}
	else if (s1[i] > s2[i])
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	
	printf("%d",ft_strncmp("merhaba","dünya",5));
}
*/
