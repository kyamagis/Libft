/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:05:57 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/05 21:32:53 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	flag;

	flag = 0;
	if (0x00 <= c && c <= 0x7F)
		flag = 1;
	return (flag);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isascii('a'));
	printf("%d", ft_isascii('A'));
	printf("%d", ft_isascii('1'));
	printf("%d", ft_isascii('~'));
	return (0);
}*/