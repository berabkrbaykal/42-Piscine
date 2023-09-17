/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaykal <bbaykal@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:32:35 by bbaykal           #+#    #+#             */
/*   Updated: 2023/09/11 15:55:06 by bbaykal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] > s2[i])
	{
		return (1);
		i++;
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d", ft_strcmp("hello", "hello"));
	printf("\n%d", ft_strcmp("hello", "word"));
	printf("\n%d", ft_strcmp("word", "variable"));
}
*/
