/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:46:49 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/05 21:03:20 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	flag;

	flag = 0;
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') \
		|| ('0' <= c && c <= '9'))
		flag = 1;
	return (flag);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('1'));
	printf("%d", ft_isalnum('~'));
	return (0);
}*/