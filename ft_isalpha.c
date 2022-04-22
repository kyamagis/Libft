/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:19:15 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/06 10:52:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	flag;

	flag = 0;
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		flag = 1;
	return (flag);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('1'));
	return (0);
}*/